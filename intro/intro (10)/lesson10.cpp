#include <stdio.h>
int main()
{
	char ch=1;//1byte
	short sh=2;//2byte
	int num=3;//4byte

	float r1=1.0;//4byte
	double r2;//8byte

	printf("ch변수의 값은 %d이고 ch의 메모리 할당 크기는 %dbyte 입니다\n",ch, sizeof(ch));
	printf("r1변수의 값은 %f이고 r1의 메모리 할당 크기는 %dbyte 입니다\n", r1, sizeof(float));

	//배열(Array)
	//인덱싱은 배열에서 값을 가져오는 방법
	//인덱스는 배열의 원소들의 개수-1만큼 지정이 가능하다
	int nums[5] = { 10, 20, 30, 40, 50 }; //5칸 짜리의 배열이 완성 정수형데이터만 들어갈 수 있다
	printf("nums 배열의 첫번째값: %d\n", nums[0]);
	printf("nums 배열의 두번째값: %d\n", nums[1]);
	printf("nums 배열의 다섯번째값: %d\n", nums[4]);

	nums[0] = 60;
	for (int i = 0; i < 5; i++)
	{
		printf("nums[%d]=%d\n", i, nums[i]);
	}
	short score[] = { 100,90,80,70 };
	//score 배열의 모든 원소들의 합계를 구하는 코드를 작성하세요
	int total = 0;
	for (int i = 0; i < 4; i++) //i가 0부터 4보다 작은동안 값을 1씩증가시키면서 반복한다
	{
		total += score[i];
	}
	printf("총점=%d 점\n", total);
	printf("평균=%.2f 점\n", total/4.F);
	return total;

	//int nums[5] = { 10, 20, 30, 40, 50 };
	/*
	nums[0] : 1
	nums[1] : 2
	nums[2] : 3
	nums[3] : 4
	*/

	for (int i = 0; i < 5; i++)
	{
		nums[i] = i + 1;
		printf("nums[%d] : %d\n", i, nums[i]);
	}
	printf("num2배열의 크기: %d bytes \n", sizeof(nums));


	int nums2[] = { 1,2,6,4,5,8,7,8,7,5,3,8,7,5,8,7,6,5,9,2,7,6,3,7,1,5,8,2,8,0,5 };
	printf("num2배열의 크기: %d bytes \n", sizeof(nums2));
	printf("nums2배열의 길이 : %d 개\n", sizeof(nums2) / sizeof(int));
	int count = sizeof(nums2) / sizeof(int); // 베열의 원소들의 개수를 구함
	for (int i = 0; i < count; i++)
	{
		printf("%d", nums2[i]);
	}



	return 0;
}