#include <stdio.h>
#include <conio.h>
int main()
{
	int i = 0;
	/*
	do
	{

		�ݺ������� ��ɹ���
	}while(���ǽ�);
	*/
	char ch = '1';
	do

	{
		printf("1. ������\n");
		printf("2. ���Ͽ���\n");
		printf("3. ��������\n");
		printf("4. �μ�\n");
		printf("================\n");
		printf("X. ���α׷� ����\n");
		printf("================\n");
		printf("�޴��� �����ϼ���: ");
		ch = _getch();
		switch (ch)
		{
		case'1':
			printf("�������� ���õǾ����ϴ�\n");
			break;

		case'2':
			printf("���Ͽ����� ���õǾ����ϴ�\n");
			break;

		case'3':
			printf("���������� ���õǾ����ϴ�\n");
			break;
		case '4':
			printf("�μⰡ ���õǾ����ϴ�\n");
			break;
		case'x':
			printf("���α׷� ����\n");
			break;
		default:
			printf("�߸� �����Ͻ�\n");
		}
	} while (ch = 'x' && ch != 'X');

	return 0;

}