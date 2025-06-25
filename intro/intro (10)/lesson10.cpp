#include <stdio.h>
int main()
{
	char ch=1;//1byte
	short sh=2;//2byte
	int num=3;//4byte

	float r1=1.0;//4byte
	double r2;//8byte

	printf("ch������ ���� %d�̰� ch�� �޸� �Ҵ� ũ��� %dbyte �Դϴ�\n",ch, sizeof(ch));
	printf("r1������ ���� %f�̰� r1�� �޸� �Ҵ� ũ��� %dbyte �Դϴ�\n", r1, sizeof(float));

	//�迭(Array)
	//�ε����� �迭���� ���� �������� ���
	//�ε����� �迭�� ���ҵ��� ����-1��ŭ ������ �����ϴ�
	int nums[5] = { 10, 20, 30, 40, 50 }; //5ĭ ¥���� �迭�� �ϼ� �����������͸� �� �� �ִ�
	printf("nums �迭�� ù��°��: %d\n", nums[0]);
	printf("nums �迭�� �ι�°��: %d\n", nums[1]);
	printf("nums �迭�� �ټ���°��: %d\n", nums[4]);

	nums[0] = 60;
	for (int i = 0; i < 5; i++)
	{
		printf("nums[%d]=%d\n", i, nums[i]);
	}
	short score[] = { 100,90,80,70 };
	//score �迭�� ��� ���ҵ��� �հ踦 ���ϴ� �ڵ带 �ۼ��ϼ���
	int total = 0;
	for (int i = 0; i < 4; i++) //i�� 0���� 4���� �������� ���� 1��������Ű�鼭 �ݺ��Ѵ�
	{
		total += score[i];
	}
	printf("����=%d ��\n", total);
	printf("���=%.2f ��\n", total/4.F);
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
	printf("num2�迭�� ũ��: %d bytes \n", sizeof(nums));


	int nums2[] = { 1,2,6,4,5,8,7,8,7,5,3,8,7,5,8,7,6,5,9,2,7,6,3,7,1,5,8,2,8,0,5 };
	printf("num2�迭�� ũ��: %d bytes \n", sizeof(nums2));
	printf("nums2�迭�� ���� : %d ��\n", sizeof(nums2) / sizeof(int));
	int count = sizeof(nums2) / sizeof(int); // ������ ���ҵ��� ������ ����
	for (int i = 0; i < count; i++)
	{
		printf("%d", nums2[i]);
	}



	return 0;
}