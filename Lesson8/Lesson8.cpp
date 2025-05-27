#define _CRT_SECURE_NO_WARNINGS

// 표준 입출력에 관련된 함수들이 정의되어 있는 헤더 파일
#include <stdio.h>

#include <stdlib.h>

// Windows OS전용 콘솔 입출력에 관련된 함수들이 정의되어 있는 헤더파일
#include <conio.h> // 표준이 아님

int main()
{
    // 반복문 : while, do ~ while, for

    /*
    while (조건식)
        조건식의 결과가 참일때 실행되는 코드...
    */

    int i = 0;
    while (i < 10)
    {
        printf("안녕하세요\n");
        i++; //i의 값을 1씩 증가시킴
    }

    while (1) //무한 반복
    {
        printf("안녕하세요\n");
        if (i==0) break;  // i가 0과 같다면 while문 탈출시킴
        i--;
    }

    i = 0;
    // 출력형식)
    // 0 1 2 3 4 5 6 7 8 9
    while (i < 10)
    {
        printf("%d\t",i++);
    }
    printf("\n");

    // 출력형식)
    /*
    4x1=4
    ...
    4x9=36
    */
    i = 1;
    while (i < 10)
    {   printf("4 x %d = %d\n", i,4*i);
        i++;
    }

    // 출력형식)
    // 3 6 9 12 15 18
    i = 1;
    while (i <= 20)
    {   
        if (i%3 == 0) {
            printf("%d\t", i);}
        i++;
    }
    printf("\n");

    //while문은 반복 횟수가 명확하지 않을때 사용한다.
    char ch = '1';
    while (ch != 'x'&& ch != 'X')
    {
        /*system("cls");*/ //stdlib.h에 정의되어 있음 / 콘솔 화면 클리어
        printf("1. 새파일\n");
        printf("2. 파일열기\n");
        printf("3. 파일저장\n");
        printf("4. 인쇄\n");
        printf("==========\n");
        printf("x. 프로그램 종료\n");
        printf("==========\n");
        printf("메뉴를 선택하세요 : ");
        
        //scanf("%c", &ch); //메뉴를 입력받는다.
        ch = _getch();

        switch (ch)
        {
        case '1':
            printf("새파일이 선택되었습니다\n");
            break;
        case '2':
            printf("파일열기가 선택되었습니다\n");
            break;
        case '3':
            printf("파일저장이 선택되었습니다\n");
            break;
        case '4':
            printf("인쇄가 선택되었습니다\n");
            break;
        case 'x':
            printf("프로그램을 종료합니다\n");
            break;
        default:
            printf("해당 메뉴가 존재하지 않습니다.\n");
        }
    }

    printf("while 반복문의 종료되었습니다.");

    return 0;
}

