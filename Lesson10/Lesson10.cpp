#include <stdio.h>


int main()
{   
    // for(초기식; 조건식; 증감식)
    //{반복 실행될 명령문들...}

    for (int i = 0; i < 10; i++)
    {   
        printf("%d\t", i);
    }

    printf("\n");

    for (int i = 1; i < 10; i++)
        printf("4 x %d = %d\n", i,i*4);
    
    printf("\n");

    for(int dan = 2; dan <=9; dan++)
    {        
        for (int i = 1; i < 10; i++)
            printf("%d x %d = %d\n", dan, i, dan * i);

        printf("\n");
    }

    for (int i = 1; i < 10; i++)
    {
        for (int dan = 2; dan < 10; dan++)
            printf("%d x %d = %d\t", dan, i, dan * i);

        printf("\n");
    }


    // 1 2 3 4 5 6 7 8 9 10
    // 11 12 13 14 15 16 17 18 19 20

    for (int i = 1; i <= 100; i++)
    {
        printf("%d\t", i);
        if (i % 10 == 0)
            printf("\n");
    }

    // 1 2 3 4 5 6 7 8 9 10
    // 11 12 13 14 15 16 17 18 19 20

    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
            printf("c\t");
        else {
            printf("% d\t", i);

        }

        if (i % 10 == 0)
            printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= 100; i++)
    {   
        int ten = i / 10; //i에서 10의 자리를 분리
        int il = i % 10; //i에서 1의 자리를 분리
        char ch = 'a';

        //10
        if (ten % 3 == 0 && ten !=0) //10의 자리수가 3의 배수이고 0이 아니라면
            ch = 'c'; // ch의 값을 'c'로 변경
        
        if (il % 3 == 0 && ch == 'c' && il != 0) // 1의 자리수가 3의 배수이고 10의 자리도 3의 배수
            ch = 'C'; //ch에 'C'로 변경 
        else if (il % 3 == 0 && il != 0) //그렇지않고 1의 자리수만 3의 배수라면 
            ch = 'c'; // ch에 'c'를 대입

        if (ch == 'c' || ch == 'C')//ch의값이 'a'가 아니고, 'c'나 'C'라면 숫자대신 ch를 출력
            printf("%c\t", ch);
        else 
            printf("% d\t", i); //위의 경우에 해당하지 않는다면 i를  그대로 출력

        if (i % 10 == 0)
            printf("\n");
    }

    printf("\n");
    
    for (int i = 1; i <= 100; i++) {
        int ten = i / 10;  
        int il = i % 10;   

        if (ten % 3 == 0 && ten != 0) {
            if (il % 3 == 0 && il != 0)
                printf("C");
            else
                printf("c");
        }
        else {
            printf("%d", ten);  
        }

        if (il % 3 == 0 && il != 0) {
            if (ten % 3 == 0 && ten != 0)
                printf("C");
            else
                printf("c"); 
        }
        else {
            printf("%d", il);  
        }

        printf("\t");

        if (i % 10 == 0) {
            printf("\n");
        }
    }
   


    return 0;
}
