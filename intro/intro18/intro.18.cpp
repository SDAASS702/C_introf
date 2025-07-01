
#define _CRTBG_MAP_ALLOC // 디버그에 관련된	변수들과 함수들을 불러온다..

#include <stdio.h>
#include <stdlib.h>
#include <crtdbg.h>

typedef unsigned int  UINT;

//UINT read_file(int** pptr, const char* filename)  // UINT 사이즈에 크기  //  filename 파일
//{

//}

int* alloc_memory(const UINT size)
{
	int* pter = (int*)malloc(size);
	if (!pter)
	{
		printf("메모리를 할당하지 못했습니다\n");
		return 0;

	}

	return pter;
}

UINT alloc_memory(int** pptr, const UINT  size)
{
	*pptr = (int *)malloc(size);
	if (!*pptr)
	{
		printf("메모리를 할당하지 못했습니다\n");
		return 0;

	}

	return size;
}

void printf_array(const int *ptr, const UINT size)
{
	for (int i = 0; i< size; i++)
	{
		printf("%2d", ptr[i]);
	}

	printf("\n");
}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	int num = 10;           // 지역 변수(자동 변수)
	int* ptr_num = NULL;    // pointer 변수 (자동 변수이자 주소만 들어간다) // 지역변수는 초기화 값을 해주는게 가장 좋다... // NULL 은 0이다 하지만 NULL은 주소 값이 없다
	ptr_num = &num;   
	int** pptr;
	pptr = &ptr_num;
	// num의 주소를 ptr_num에 대입


	 int arr[10] = { 1, 2, 3, 4, 5 ,6, 7, 8, 9, 10 };
	 printf("arr : ");
	 printf_array(arr, 10);


	//int** pptr;               // 2차원 포인터

	//pptr = &ptr_num;          // 2차원 포인터는 1차원 포인터의 주소를 저장할 수 있다..

	UINT size = 10;
	int* pArr = NULL;         // 가변 배열로 사용할 예정..
	pArr = arr;
	printf("pArr : ");
	printf_array(pArr, size);


	//pArr에 10칸짜리 배열을 할당..
	// ... 
	size = 10 * sizeof(int);   // 배열에 할당될 메모리의 크기를 구함(바이트 단위)
	alloc_memory(&pArr, size);

	for (UINT i = 0; i < 10; i++)
	{
		pArr[i] = i * 2;
	}

	printf("pArr : ");
	printf_array(pArr, 10);

	printf("arr : ");
	printf_array(arr, 10);

	free(pArr);
	pArr = NULL;

	printf("프로그램이 정상 종료됨\n");

	// pArr에 20칸짜리 배열을 할당..

	//prtinf


    //scanf_s


	return 0;



}
