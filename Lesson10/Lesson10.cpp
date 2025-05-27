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


    return 0;
}
