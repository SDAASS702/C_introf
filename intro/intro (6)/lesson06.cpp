#define _CRT_SECURE_NO_WARNINGS
//표준 입출력애 관련된 함수들이 정의되어 있는 헤어파일
#include <stdio.h>
// 자주 사용되는 유틸리티 함수들이 정의되어 있는 헤더파일
#include <stdlib.h>
//wimdows os 전용 콘솔(터미널, 명령프롬프트) 입출력에 관련된 함수들이 정의되어 있는 헤더파일
#include <conio.h> //표준이 아니다

int main()
{
    //반복문: while, do~while, for

    //안녕하세요
    /*
    if(조건식)
    조건식의 결과가 참일 때 실행되는 코드
    */
    int i = 10;
    while(i<10)
    {
        printf("안녕하세요\n");
        i++; //i의 값을 1 씩 증가시킴
    }

    while (1) //무한 반복, 무한 루프 라고 부름
    {
        printf("안녕하세요\n");
        if (i==0)   break; //i 과 0과 같다면 while문을 탈출시킴
        i--;
    }

    i = 0;
    // 출력형식)
    // 0    1    2   3   4   5   6   7   8   9
    //위와 같이 출력되도록 와일 반복문을 이용하여 코드를 작성하시오
    while (i < 10)
    {
        printf("%d\t",i++);
    }
    printf("\n"); //줄바꿈만 실행됨

    //출력형식
    /*
    4 x 1 = 4
    4 x 2 = 8
    4 x 3 = 12
    4 x 4 = 16
    
    */
    i = 1;
    while (i<10)
    {

        printf("4 x %d = %d\n", i, 4 * i);
        i++;
    }
    
    // 출력형식
    // //20이하의 3의 배수를 출력하시오
    //3     6   9   12  15  18  
    i = 1;
    while (i <= 20)
    {
        if (i % 3 == 0)
            printf("%d\t", i);
        i++;
    }
    printf("\n");

    
    //while문은 반복 횟수가 명확하지 않을 때 사용한다
    char ch='1';
    while (ch!='x'&& ch !='X')
    {
        //system("cls"); // stdㅣib.h에 정의되어 있음
        printf("1. 새파일\n");
        printf("2. 파일열기\n");
        printf("3. 파일저장\n");
        printf("4. 인쇄\n");
        printf("================\n");
        printf("X. 프로그램 종료\n");
        printf("================\n");
        printf("메뉴를 선택하세요: ");
        //scanf("%c", &ch); //메뉴를 입력받는다
        
        //conio.h에 정의되어 있다
        ch = _getch(); //엔터키 없이 한개의 키 입력을 바로 처리한다

        //메뉴를 체크한다
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
    }


    printf("while 반복문이 종료되었습니다\n");

    return 0;
}
