#include<stdio.h>
#include <string.h>
int main()
{
	// ��� �迭�� ���ڿ��� �ƴ����� ��� ���ڿ��� �迭�̴�

	//char sz[] = { 65,66,67,68,69,70,71 };
	char sz[] = { 'A','B','C','D','E','F','G',0 }; //0�� '\0'�̶�� �� �� �ִ� null terminated character(�� �͹̳���Ƽ�� ����)

	//sz�迭�� ũ��: 7 byte
	//sz�迭�� ���� : 7 ��
	printf("sz�迭�� ũ��: %d bytes \n", sizeof(sz));
	printf("sz�迭�� ���� : %d ��\n", sizeof(sz) / sizeof(char));
	
	int length = sizeof(sz) / sizeof(char);
	for (int i = 0; i < length; i++)
	{
		//printf("%d", sz[i]); //���ڷ� ǥ��
		printf("%c", sz[i]); //���ڷ� ǥ�� (�ƽ�Ű�ڵ�)
		
	}
	printf("\n");

	//for ���� �̿��Ͽ� sz �迭�� �ִ� ������ ��� �ҹ��ڷ� ����
	for (int i = 0; i < strlen(sz); i++)
	{
		sz[i] += 32;

	}

	printf("sz : %s\n", sz);
	printf("sz���ڿ��� ���� : %d\n", strlen(sz));

	//char sz2[] = { 'H','e','l','l','o',' ','W','o','r','l','d',0 };
	char sz2[] = "Hello World";
	printf("sz2�� ���ڿ��� ����: %d\n", strlen(sz2)); //���͹̳���Ƽ��(0) ���� 12��
	printf("sz2�� �迭�� ����: %d\n", sizeof(sz2)); ///���͹̳���Ƽ�带 �������� �ʾƼ� 11��
	
	//�빮�ڸ� ������ �ҹ��ڸ� �빮�ڷ� �ٲ۴�
	for (int i = 0; i < strlen(sz2); i++)
	{

		if (sz2[i] >= 'a' && sz[i] <= 'z') //sz[i]�� ��Ұ� �ҹ��ڶ��
			sz[i] -= 32;
	}
	printf("%s\n", sz2); //HELLO WORLD


	//���ڿ��� ���� ������ �迭ǥ��[]�� ū����ǥ�� ������ �������!!!
	char sz3[] = "�ȳ�";
	printf("%s\n", sz3);
	printf("strlen: %d\n", strlen(sz3));
	printf("sizeof(sz3): %d\n", sizeof(sz3));

	return 0;
}