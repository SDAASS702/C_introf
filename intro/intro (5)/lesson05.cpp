#include <stdio.h>

int main()
{
	// 비트연산자 : << , >> , &, |, ~, ^(eXclusive OR)
	short n3 = 0;
	short n1 = 3; //0011
	short n2 = 5; //0101
	//n3 = n1 & n2; //0001 //비트 and 연산자
	n3 = n1 | n2; //0111 // 비트 or  연산자

	printf("n3=%d\n", n3);
	
	n3 = ~n1;
	printf("n3=%d\n", n3);

	//XOR
	n3 = n1 ^ n2;
	printf("n3=%d\n", n3);
	
	//0011 >>>1100  
	n3 = n1 << 2; //n1을 왼쪽으로 2비트 이동시킴
	printf("n3=%d\n", n3);

	//오른쪽으로 이동할 시에는 부호가 바뀌지 않음
	n3 = n2 >> 2;
	printf("n3=%d\n", n3);

	return 0;

}