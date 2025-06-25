#include "mylib.h"

// 재귀 호출 함수(Recursive Function)

// 1부터 n까지의 합을 구하는 함수
int sum(int n)
{
	if (n == 0)
		return 0;	// 함수를 즉시 중단시키고 호출한쪽으로 결과를 전달.

	return n + sum(n - 1);	// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0

	//int total = 0;
	//for (int i = 1; i <= n; i++)
	//{
	//	total += i; // 1 + 2 + 3 + 4 + 5 + ... + 10
	//}

	//return total;
}

// 1 부터 10까지 팩토리얼을 구하는 재귀 호출 함수를 구현하세요
int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;

	return n * factorial(n - 1);
}


void random_value(int arr[], int count)
{
	if (!arr || !count)
		return;

	for (int i = 0; i < count; i++)
	{
		arr[i] = rand() % 100;	// arr배열의 i번째 요소에 랜덤한 값을 대입(100미만의 값으로 제한)
	}
}

// 1 ~ max_value까지만 난수를 대입하게 하기 
void random_value(int arr[], int count, int max_val)
{
	if (!arr || !count)
		return;

	for (int i = 0; i < count; i++)
	{
		// 랜덤값을 생성하여 변수에 저장
		int tmp;
		do 
		{
			tmp = rand() % max_val + 1; // 랜덤값을 생성하여 임시 변수에 저장
		} while (find_value(arr, count, tmp) >= 0);

		arr[i] = tmp;


		//arr[i] = rand() % max_val + 1;	// arr배열의 i번째 요소에 랜덤한 값을 대입(100미만의 값으로 제한)
		//arr[i] = find_value(arr, i, max_val);
		
		
	}
}

// arr = 0x1
// arr(pointer) + i : 주소의 연산
// 위에서 + 1의 의미는 + (sizeof(type) * i)과 같음
void print_array(int arr[], int count)
{
	if (!arr || !count)
		return;

	for (int i = 0; i < count; i++)
	{
		//printf("%3d ", arr[i]);
		printf("%3d ", *(arr + i));
	}

	printf("\n");
}

void exchange_value(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

// 순차 정렬(가장 기본적인 정렬 알고리즘)
void sequence_sort(int arr[], int count)
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (arr[i] > arr[j])
				exchange_value(&arr[i], &arr[j]);
		}
	}
}

/*
find_value : 순차 탐색 함수
반환값 : int, 찾은 값의 인덱스, 찾을 값이 배열에 없다면 -1을 반환

매개변수
int arr[] : 대상 배열
int count : 배열의 요소들의 갯수
int to_find : 대상 배열에서 찾을 값
*/
int find_value(int arr[], int count, int to_find)
{
	for (int i = 0; i < count; i++)
	{
		if (arr[i] == to_find)
			return i;
	}

	return -1;
}

// 이진 탐색
int binary_search(int arr[], int count, int to_find)
{
	int start = 0;			// 초기 시작 인덱스
	int end = count - 1;	// 초기 마지막 인덱스

	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] == to_find)
			return mid;

		if (arr[mid] > to_find)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return -1;
}

// left : 시작 인덱스
// right : 마지막 인덱스
void my_qsort(int arr[], int left, int right)
{
	if (left >= right) return;

	// 반으로 나눌 기준값을 정함
	int pivot = arr[left];	// 일반적으로 배열의 시작값을 기준값으로 정한다.
	int i = left + 1;
	int j = right;

	while (i <= j)
	{
		// while문의 조건식이 거짓이되면 증가(감소)를 중단함
		while (i <= right && arr[i] <= pivot) i++; 
		while (j >= left+1 && arr[j] >= pivot) j--;
		// 아직 i와 j가 교차하지 않았다면 두 값을 서로 교환한다.
		if (i <= j) exchange_value(&arr[i], &arr[j]);
	}

	exchange_value(&arr[left], &arr[j]);

	my_qsort(arr, left, j - 1);
	my_qsort(arr, j + 1, right);
}


int my_strlen(const char* psz)
{
	int count = 0;
	int i = 0;

	// 문자열 끝(\0)을 만날 때까지 반복
	while (psz[i] != '\0')
	{
		count++;
		i++;
	}

	return count;

}