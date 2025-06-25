#include<stdio.h>



int main()
{
	//연산자

	/*
	산술 연산자 +,-,*,/,%(나머지)
	대입 연산자 =,+=,-=,*=,/=,%=(나머지)
	증감 연산자 ++.--
	비교 연산자 >,>=,<,<=,==,!=
	논리 연산자 &&,||,!
	비트 연산자 <<, >>,&,|,^,~
	기타 연산자 ?: , & , *
	*/

	int n1 = 10;
	int n2 = 3;
	int n3;
	float f1;

	//산술 연산자

	n3 = n1 + n2;
	printf("%d + %d = %d\n", n1, n2, n3);

	n3 = n1 - n2;
	printf("%d - %d = %d\n", n1, n2, n3);

	n3 = n1 * n2;
	printf("%d * %d = %d\n", n1, n2, n3);

	f1 = n1 / (float)n2;
	printf("%d / %d = %f\n", n1, n2, f1);

	n3 = n1 % n2;
	printf("%d %% %d = %d\n", n1, n2, n3);

	//형변환 (Type cast): 형변환은 데이터의 손실이 발생될 수 있다

	char n=100;
	n1 = 300;
	n = n1; // 묵시적인 형변환
	n = (char)n1; //명시적 형변환
	f1 = 3.3333F;
	n1 = f1; //소수점 이하는 소실된다 묵시적
	n1 = (int)f1;




	return 0;
}
