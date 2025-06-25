#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	// 제어문자
	printf("안녕하세요\n"); //\n : 줄바꿈 . new line
	printf("안녕하세요\t"); // \t : tab 기능 수행
	printf("tab만큼 이동함");
	printf("hello c");
	printf("\rwelcome c"); // \r : 커서를 라인의 처음 위치로 이동시킨다
	printf("\b\b c++\n"); //\b : 백스페이스 기능을 한다
	printf("경기도 \"수원시\"\n"); //\" \" , 인용부호 출력
	printf("c:\\test.txt\n");//\\ : \기호를 출력한다



	int age = 10; //4바이트
	char ch = 'k'; //1바이트
	short kor = 96; //2바이트
	float pi = 3.14F; //4바이트
	double math = 42.195;

	//형식문자
	printf("나이는 %d살입니다\n", age);
	printf("%corea\n", ch);
	printf("국어점수: %hd\n", kor); //short형 정수
	printf("PI: %4.2f\n", pi); // 소수점 포함 4자리를 확보하고 소수점이하는 2자리로 제한함
	printf("marathon: %6.1f\n", math);
	printf("marathon: %.3f\n", math);
	printf("%5d", age); //다섯자리를 확보하고 우측정렬하여 출력
	printf("%-5d\n", age); //다섯자리를 확보하고 좌측정렬하여 출력

	//16진수로 출력
	printf("10=%x\n", age);

	//퍼센트 출력
	printf("상위 %d%%\n", kor);

	// %s : 문자열 출력
	printf("내 이름은 %s 입니다\n", "홍길동");

	//%p : 특정 객체의 메모리 주소를 출력한다
	
	printf("ch의 주소: %p\n", &ch); // & : 주소 연산자 변수 앞에 단독으로 사용된 경우

	printf("내 이름은 %s 이고, 나이는 %d살 입니다", "홍길동", age);
	
	printf("\n\n==========================================\n");

	//표준 입력 함수 scanf
	printf("나이를 입력하시오: ");
	scanf("%d", &age); //정수형 데잉터 한 개를 입력받는다
	printf("내 이름은 %s 이고, 나이는 %d살 입니다\n", "홍길동", age);
	
	printf("당신의 키를 입력하시오: ");
	float height;
	scanf("%f", &height);
	
	printf("입력받은 키는 %.2f cm 입니다\n", height);

	printf("알파벳 한자를 입력하시오: ");
	scanf("%c", &ch); //알파벳 한 글자 입력받기
	printf("입력된 알파벳은 %c입니다 \n", ch);

	printf("국어점수를 입력하세요: ");
	scanf("%hd", &kor); //kor은 short형이므로 반드시 %hd를 사용해야한다
	printf("입력된 국어점수는 %d점입니다 \n", kor);

	short eng;
	short history;
	printf("국어,영어,역사 점수를 입력하세요: ");
	scanf("%hd %hd %hd", & kor, & eng, & history);
	printf("국어: %d,  영어: %d. 역사: %d\n", kor, eng, history);


	return 0;
}
