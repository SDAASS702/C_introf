#include<stdio.h>
#include <string.h>
int main()
{
	// 모든 배열은 문자열이 아니지만 모든 문자열은 배열이다

	//char sz[] = { 65,66,67,68,69,70,71 };
	char sz[] = { 'A','B','C','D','E','F','G',0 }; //0을 '\0'이라고도 쓸 수 있다 null terminated character(널 터미네이티드 문자)

	//sz배열의 크기: 7 byte
	//sz배열의 길이 : 7 개
	printf("sz배열의 크기: %d bytes \n", sizeof(sz));
	printf("sz배열의 길이 : %d 개\n", sizeof(sz) / sizeof(char));
	
	int length = sizeof(sz) / sizeof(char);
	for (int i = 0; i < length; i++)
	{
		//printf("%d", sz[i]); //숫자로 표현
		printf("%c", sz[i]); //문자로 표현 (아스키코드)
		
	}
	printf("\n");

	//for 문을 이용하여 sz 배열에 있는 값들을 모두 소문자로 변경
	for (int i = 0; i < strlen(sz); i++)
	{
		sz[i] += 32;

	}

	printf("sz : %s\n", sz);
	printf("sz문자열의 길이 : %d\n", strlen(sz));

	//char sz2[] = { 'H','e','l','l','o',' ','W','o','r','l','d',0 };
	char sz2[] = "Hello World";
	printf("sz2의 문자열의 길이: %d\n", strlen(sz2)); //널터미네이티드(0) 포함 12개
	printf("sz2의 배열의 길이: %d\n", sizeof(sz2)); ///널터미네이티드를 포함하지 않아서 11개
	
	//대문자를 제외한 소문자를 대문자로 바꾼다
	for (int i = 0; i < strlen(sz2); i++)
	{

		if (sz2[i] >= 'a' && sz[i] <= 'z') //sz[i]의 요소가 소문자라면
			sz[i] -= 32;
	}
	printf("%s\n", sz2); //HELLO WORLD


	//문자열을 만들 때에는 배열표시[]와 큰따옴표를 무조건 써줘야함!!!
	char sz3[] = "안녕";
	printf("%s\n", sz3);
	printf("strlen: %d\n", strlen(sz3));
	printf("sizeof(sz3): %d\n", sizeof(sz3));

	return 0;
}