
#include "mylib.h"


int main()
{
	printf("1부터 10까지의 합 : %d\n", sum(10));


	int arr[COUNT] = { 0 };

	/*
	time_t tm = time(NULL);
	unsigned int init = (unsigned int)tm;
	srand(init);
	*/

	// Randomize (랜덤 초기화)
	srand((unsigned int)time(NULL));
	random_value(arr, COUNT);

	printf("===== 초기값 =====\n");
	print_array(arr, COUNT);

	// sequence_sort(arr, COUNT);	// 순차 정렬 함수 호출
	my_qsort(arr, 0, COUNT-1);

	printf("===== 정렬후 =====\n");
	print_array(arr, COUNT);

	printf("===== 순차 탐색 테스트 =====\n");
	printf("찾을 값을 입력하세요 >>> ");
	int num;
	scanf("%d", &num);	// 찾을 값
	int idx = find_value(arr, COUNT, num);	// 순차 탐색
	if (idx < 0)
		printf("%d를 배열에서 찾지 못 했습니다\n", num);
	else
		printf("%d는 배열의 [%d] index 위치에 있습니다.\n", num, idx);


	idx = binary_search(arr, COUNT, num);	// 이진 탐색
	if (idx < 0)
		printf("%d를 배열에서 찾지 못 했습니다\n", num);
	else
		printf("%d는 배열의 [%d] index 위치에 있습니다.\n", num, idx);


	return 0;
}


