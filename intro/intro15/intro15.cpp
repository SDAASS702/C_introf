
#include "mylib.h"
#include <string.h> 


int main()
{
	// char sz[] = "HEllo";
	// 배열의 크기 : 6
	// 문자열의 길이 : 5

	/*char sz[30] = {0};
	printf("문자열을 입력하세요 : ");
	//scanf("%s", sz);
	fgets(sz, 30, stdin);  // stdout : 표준 출력장치, stdin : 표준 입력 장치


	// scanf = 여러게의  한 번에 입력을 받을떼 공백 개념에 문자를 작성을 할 수가 없다. 즉 단어 하나 입력을 할때에는 써도 됨


	printf("배열의 길이 : %u\n", sizeof(sz));
	printf("문자열의 길이 : %u\n", strlen(sz));


	// 아래와 같이 할 수 없음
	// sz = "SBS Academy";  // 이런 코드는 절대로 허용이 되지 않는다.

	sz[1] = 'E'; // 가능
	printf("%s\n", sz);


	//
	const char* psz = "Hello";
	//psz[1] = 'E'; 문자열 내의 각 아이템을 변경을 할 수가 없음 불가능
	printf("%s\n", psz);  // < 각각 문자열을 할 수 있고

	printf("변수의 크기 : %u\n", sizeof(psz));
	printf("문자열의 길이 : %u\n", strlen(psz));


	psz = "SBS\0 Academy"; // < 좀 더 쉽게 선언한거에 () 바꾸면서?  문자열을 가능?
	printf("%s\n", psz);
	printf("문자열의 길이 : %u\n", strlen(psz));

	printf("문자열의 길이 : %d\n", my_strlen(psz));
	*/

	//2차원 배열
	int arr[3][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, { 11, 12, 13, 14, 15 } };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d", arr[i][j]);

		} printf("\n");
	}


	printf("arr : %p\n", arr);           // arr의 주소
	printf("arr[0][0] : %p\n", &arr[0][0]);    // arr의 첫번재 아이템 주소 
	printf("arr[0][0] : %p\n", &arr[0][4]);    // arr의 다섯번째 아이템 주소
	printf("arr[1][0] : %p\n", &arr[1][0]);    // arr의 두번째 아이템 주소
	printf("arr[1] : %p\n", arr[1]);   // arr[1] 주소라서 &붙일 필요가 없음

	//랜덤 초기화
	srand((unsigned int)time(NULL));

	// 1차원 배열로 당첨번호 배열을 생성하세요
	int wins[COL]; // 당첨 번호 {1,2,3,4,5,6}
	// 당첨번호(1차원 배열 생성 및 출력)



	// lotto : 5 X 6
	int lotto[ROW][COL] = { 0 }; // 2차원 배열의 모든 요소들을 0으로 초기화
	printf("=========사용지 로또 번호 ========\n");
	for (int i = 0; i < ROW; i++)
	{
		random_value(lotto[i], COL, 45);
		my_qsort(lotto[i], 0, COL - 1);
		print_array(lotto[i], COL);

	}
	printf("\n======= 결과 비교 =======\n");
	for (int i = 0; i < ROW; i++)
	{
		int match = 0;  // 맞춘 개수

		for (int j = 0; j < COL; j++) {
			for (int k = 0; k < COL; k++) {
				if (lotto[i][j] == wins[k]) {
					match++;  // 당첨 번호와 일치하면 증가
					break;
				}
			}
		}

		printf("로또[%d] → ", i + 1);
		print_array(lotto[i], COL);  // 사용자 로또 번호 다시 출력
		printf("👉 %d개 일치!\n", match);


		// 당첨번호와(wise)와 arr[i] 배열의 당첨 갯수를 카운터하여 출력하세요 
		// 1 2 3 4 5 6 :  예시: 2개 맞음, 0개 일치

		//
		int* ptr1[COL]; // 각 아이템이 포인터 변수(int *)인 1차원 배열
		ptr1[0] = &lotto[0][0];

		int (*ptr2)[COL] = lotto; // 2차 포인터를 가르치는 포인터 // 초기화가 되어야 함
		printf("%d", lotto[0][0]);
		printf("%d", ptr2[0][0]);



		return 0;

	}

}