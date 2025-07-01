#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


typedef struct {
	char name[20];
	int  age;

}PERSON;

//열거형(Eunmeration Type) ===> 슌서형
typedef enum
{
	RED = 100 , BLUE = 200, ORANGE= 300, BLACK = 400, WHITE = 500  //밸류를 정할수 있다
} MyColor;

// 공용체(Union Type)
typedef union 
{
	short n1;
	short n2;
	long  l1;

} MyUnion;




//함수의 주소를 저장할 수 있는 데이터 유형을 정의
typedef int (*Ffun)(int, int);  // *Ffun 타입으로 정의 됨



int add(int n1, int n2)
{
	return n1 + n2;
}

int subtract(int n1, int n2)
{
	return n1 - n2;
}

void printf_value(int num1, int num2, Ffun f)
{
	printf("printf_value = %d\n", f(num1, num2));

}






int main()
{
	int num = 10;
	int* ptr = &num;
	printf("num의 값 : %d\n", *ptr);


	float r1 = 3.14F;
	float* ptr_r1 = &r1;



	PERSON p1;
	strcpy(p1.name, "james");
	p1.age = 30;

	PERSON* pPerson = &p1;

	//int (*fun)(int, int );
	Ffun fun;
	fun = add;

	int ret = fun(10, 20);
	printf("ret = %d\n", ret);

	fun = subtract;
	ret = fun(10, 20);
	printf("ret = %d\n", ret);


	// fun = printf_value;  // 서로 다른 유형이기때문에 대입 불가!!

	printf_value(10, 20, add);
	printf_value(10, 20, subtract);


	MyColor my_clor;  // clor 선언된건만 확인된다 ...
	my_clor = ORANGE;
	my_clor = BLACK;

	MyUnion u;
	u.n1 = 10;
	u.l1 = 2000;
	printf("u.n1 = %d\n", u.n1);
	printf("u.l1 = %d\n", u.n1);


	return 0;

}

