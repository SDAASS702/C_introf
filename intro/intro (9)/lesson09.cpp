#include <stdio.h>
/*
함수 사용 규칙
1. 호출하기 전에 무조건 함수가 정의되어 있어야한다
2. 함수를 호출할 때는 정의된 형식과 완전하게 동일하게 호출해야한다
3. 그 외 변수명 작성 규칙과 동일하게 정의한다
4. 함수는 다른 함수 내부에 포함될 수 없다. 반드시 독립적으로 존재해야 한다

*/

//함수를 사용하는 가장 큰 이유는 코드의 재사용(생산성을 높인다, Productivity)

/*
함수를 정의하는 방법
함수형(자료형) 함수명( [매개변수1, 매개변수2, ...] ){ }


매개변수의 다른 말: Parameters, Arguments, 인수, 인자

*/

//Define a function (함수의 정의)
int add_number(int n1, int n2)

{
	return n1 + n2; //return 함수를 처리하고 결과를 호출부로 반환하는 명령
}


//void: 반환값이 없음 , 호출한 쪽에 결과를 반환하지 않는다

void display_number(int n)
{
	printf("매개변수: %d\n", n);
}

float get_pi()
{
	return 3.141592F;
}

int multiply(int n1, int n2)
{
	int result = 0;
	for (int i = 0; i < n2; i++)
	{
		result = add_number(result, n1);
	}
	return result;
}

//1번
// 1부터 n까지의 합을 구하여 반환하는 함수를 정의하고 main()함수에서 100을 입력하여 호출한 뒤 그 결과를 출력하시오

//1+2+3+4+...n=???
int a(int n)

{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;

}
//2번
//반지름 float 을 입력하면 원의 넓이 값을 구하는 함수를 정의하세요 
//scanf()를 사용하지않고 매개변수로 반지름을 입력받도록 함수를 설계

float ci(float r)
{
	return get_pi() * r * r;

}



int main()
{
	//변수형 변수명 [ = 초기화할 값 ];
	//Call a function(함수의 호출)
	int n = add_number(10, 20); //add_number()함수를 호출하고 그 결과를 n에 저장한다
	printf("n=%d\n", n);

	n = add_number(30, 5); //add_number()함수를 호출하고 그 결과를 n에 저장한다
	printf("n=%d\n", n);


	//int n1;
	//int n2;
	//scanf("%d", &n1);

	//n = add_number(n1, n2);

	display_number(50);

	printf("파이: %.4f\n", get_pi());

	printf("%d\n", multiply(10, 5));

	//1번
	printf("1부터 100까지의 합: %s\n", a(100));
	//2번




	return 0;
}
