#define _CRT_SECURE_NO_WARNINGS 



// stack == 모든 지역변수들이 할당되는 공간
// code  == 명령어들이 존재하는 공간                     
// Data(static) == static 변수 전역 변수
// Heap  == 작업에 공간을 빌려주는것 ?? 

// === > 위에 있는 모두 (os) 윈도우에서 관리를 한다..


#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

typedef unsigned int  UINT;

// 파일을 아직 안열음... 파일에다 작성하는 것이 아닌 메모리에 작성 중이다..
// 메모리이다 명심해야 됩니다..
// 그래서 파일에 읽고 쓰기가 안됩니다 .. 

typedef struct {
	UINT id;
	char email[20];
	char pw[10];
	UINT age;
	
} USER;

// 전역 변수(Global varible)
int g_age;

void save_user(USER* pUser)
{
	   

	if (!pUser) return;

	// FIle open Mode
	// Wirte Mode  (w) : 데이터를 파일에 저장하기 위해서 쓰기 모드로 파일을 사용
	// Read Mode   (r): 데이터를 파일로부터 읽기 위해서 읽기  보드로 파일로 사용
	// Append Mode (a): 데이터를 파일로 저장하기 위해서 쓰기 모드로 파일을 사용

	// Text Mode   (t): 텍스트파일만 저장하는 것
	// Birary Mode (b): 텍스트 파일을 외 다른 파일들은  Birary Mode 파일이다..
	// 

	//데이터를 저장하기 위한 파일을 연다.
	FILE* fd = fopen("user. det", "wb");                                         //fopen(; 오픈 포인터
	if (!fd)
	{
		printf("파일 열기 실패!\n");
		return;
	}

	/*int arr[10] = {1, 2, 3, 4, 5 ,6, 7, 8, 9, 10};
	fwrite(arr, sizeof(int), 10)

	*/

	// 파일(fd)에 pUser의 내용을 저장 시도
	size_t res = fwrite(
		                 pUser,              // 메모리에 있는 저장할 데이터 이다..  
		                 sizeof(USER),       // 데이터의 단위 크기
		                 1,                  // 각 단위의 개수
		                 fd);                // 파일 핸들러
	if (res != 1)
		printf("저장 실패\n");
	
	fclose(fd);
	 

}

void load_user(USER* pUser)
{

	if (!pUser) return;
	
	//파일(user, dat)을 읽기 모드로 오픈한다.
	FILE* fd = fopen("user. det", "rb");               // 파일이 없으면 실패 리드 모드 읽기 모드 (rd)                            
	if (!fd)
	{
		printf("파일 열기 실패!\n");
		return;
	}

	// sizeof에서 pUser에 데이터를 집어 넣겠다
	fread(pUser, sizeof(USER), 1, fd);

	fclose(fd);
}

void save_text(const char* text)
{
	FILE* fd = fopen("my_text.txt", "wt");
	if (!fd)
	{
		printf("파일 오픈 실패!\n");
		return;
	}

	//fputs(text, fd);
	size_t len = strlen(text);        // text 문자열의 길이를 구하여 len에 저장..
	fwrite(text, sizeof(char), len, fd);

	fclose(fd);
	// fputs()
}

void load_text()  //지역변수
{
	int        number = 10;         // 지역변수 : 함수가 실행이 될떄 할당 , 함수가 종료되면 
	static int my_st = 10;          // static: 프로그램이 시작할떄 할당,프로그램이 종료가 될때 끝남,  계속 증가가 되는 변수   ====> 객체지향형 프로그래밍에서 많이 사용됨 // 정적 변수


	FILE* fd = fopen("my_text.txt", "rt");
	if (!fd)
	{
		printf("파일 오픈 실패!\n");
		return;
	}

	// 


	fseek(fd, 0, SEEK_END);  //  cursor를 파일의 마지막 위치로 이동시킴
	long size = ftell(fd);   //  이 위치의 값은 파일 크기(byte 단위)가 된다..
	fseek(fd, 0, SEEK_SET);  //  cursor를 BOF지점으로 이동시킴

	char* text = (char*)malloc(size);   // void형태에서 char형태로 형변환을 해준다.. 
	if (text)
	{
		memset(text, 0, size);
		fread(text, sizeof(char), size, fd); // heap 할당 받음
		printf("%s\n", text);
		free(text); // heap할당받은 메모리 헤제(반환)

	}

	// printf("%d\n", size);


	/*printf("%d\t", ++my_st);
	printf("%d\n", ++number);
    */

	fclose(fd);     // 무조건 해야됨
}


int main()
{
	USER user = { 0 };      //맴버 변수중에 문자열 데이터를 쉽게 입력하기 위해서...

	//user.id = 1;
	//printf("이메일을 입력하세요 : ");
	//scanf("%s", user.email);

	//printf("비밀번호를 입력하세요 : ");
	//scanf("%s", user.pw);

	//printf("나이를 입력하세요 : ");
	//scanf("%d", &user.age);

	//// 입력받은 데이터를 파일에 저장하기
	//save_user(&user);


	load_user(&user);

	printf("ID :       %d\n", user.id);
	printf("Email :    %s\n", user.email);
	printf("PASSWORD : %s\n", user.pw);
	printf("AGE :      %u\n", user.age);


	
	// char text[30] = "VOER\nCVC\nREST\n5090 FE\nDF\n";


	//const char* text = "HELLO\n안녕하세요\nNice to meet you\n반갑습니다\n";
	//save_text(text);


	/*const char* text = "VOER\nCVC\nREST\n5090 FE\nDF\n";
	save_text(text);*/

	//for(int i = 0; i < 5; i++)
	//	load_text();




	load_text();

	return 0;
}

