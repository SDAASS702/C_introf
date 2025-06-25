//전처리문
#include<stdio.h> //컴파일 하기 전에 헤더 파일 포함시킴
//stdio.h :standard input & output (표준 입출력)

//매크로 상수
#define MAX_VALUE          100

int main()
{
	//콘솔에 내용을 출력하는 함수
	printf("안녕하세요 c언어 시간입니다\n");
	
	//
	// 변수와 자료형
	//

	//정수형 변수
	char ch; //char 형  변수 ch를 선언(만듬), 1 바이트 , 2^8가지의 서로 다른 데이터를 표현(저장)할 수 있다 
	short n; //2바이트 2^16
	int num; //4바이트 2^32
	long money; //4바이트 혹은 8바이트 2^32
	long long big_number; //8바이트 2^64

	//양의 정수형을 선언
	unsigned char uch; //0~255
	unsigned short ush;
	unsigned int un;

	//실수형 변수
	float pi; //4바이트
	double ma; //8바이트
	long double real; //8바이트(win 64bit 기준 8바이트)

	printf("ch 의 크기 : %u\n", sizeof(ch));
	printf("n 의 크기 : %u\n", sizeof(n));
	printf("num 의 크기 : %u\n", sizeof(num));
	printf("money 의 크기 : %u\n", sizeof(money));
	printf("big_number 의 크기 : %u\n", sizeof(big_number));


	printf("float 의 크기 : %u\n", sizeof(float));
	printf("double 의 크기 : %u\n", sizeof(double));
	printf("long double 의 크기 : %u\n", sizeof(long double));

	ch = 127; //리터럴 (숫자, 문자, 문자열)
	printf("ch의 값 : %d\n", ch);

	ch = 128;
	printf("ch의 값 : %d\n", ch);

	//변수명 작성규칙
	/*
	1. 대소문자를 구분한다
	2. 알파벳 대문자 소문자 숫자 _(언더바)를 사용가능
	3. 키워드 를 사용할 수 없음
	4. 숫자가 제일 처음에 나올 수 없다
	*/

	//변수명 작성 권장 사항
	/*
	1. 변수명은 모두 소문자로만 구성한다
	2. 변수명만 보면 어떤 자료가 저장되는지 유추가 가능하도록 작성
	3. 두 개 이상의 단어를 사용하여 작성할 때 언더바를 사용 my_data, myData
	
	*/

	//ASCII CODE
	ch = 'a'; //문자 리터럴을 대입
	ch = 97; //숫자 리터럴을 대입
	printf("ch의 값: %d\n", ch);
	printf("ch의 값: %c\n", ch);

	//심볼릭 상수(sybolic constant)
	const int PI = 3.14F; //값을 바꿀 수 없음, 값을 보호하기 위하여 사용
	//PI = 5.0F;//3.14f = 5.0f;
	ch = MAX_VALUE;



	return 0;
}