#include <stdio.h>
#include <conio.h>
int main()
{
	int i = 0;
	/*
	do
	{

		반복실행할 명령문들
	}while(조건식);
	*/
	char ch = '1';
	do

	{
		printf("1. 새파일\n");
		printf("2. 파일열기\n");
		printf("3. 파일저장\n");
		printf("4. 인쇄\n");
		printf("================\n");
		printf("X. 프로그램 종료\n");
		printf("================\n");
		printf("메뉴를 선택하세요: ");
		ch = _getch();
		switch (ch)
		{
		case'1':
			printf("새파일이 선택되었습니다\n");
			break;

		case'2':
			printf("파일열기이 선택되었습니다\n");
			break;

		case'3':
			printf("파일저장이 선택되었습니다\n");
			break;
		case '4':
			printf("인쇄가 선택되었습니다\n");
			break;
		case'x':
			printf("프로그램 종료\n");
			break;
		default:
			printf("잘못 선택하심\n");
		}
	} while (ch = 'x' && ch != 'X');

	return 0;

}