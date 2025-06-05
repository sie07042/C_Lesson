#include <stdio.h>

// 1111 0000
// F    F

int add(int a, int b) {

    a = 100;
    b = 200;

    return a + b;
}

// 함수의 오버로딩(Over Loading)
int add(int *p1, int *p2) {

    printf("%d\n", *p1);
    printf("%d\n", *p2);
    *p1 = 100;
    *p2 = 200;;

    return *p1 + *p2;
}

void add(int a, int b, int* ret) {

    *ret = a + b;
}

void exchange(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


int main()
{   // Local(지역)
    //
    short num; //메모리 2 바이트 확보(정수형으로, 시스템이 알아서 잡으세요)
    num = 5; // 확보된 메모리 num공간에 정수 5를 대입하라

    // &의 사용처
    // 논리 연산자 : 1 && 0
    // 비트 연산자 : 1 & 0
    // 주소 연산자 : &변수, 변수의 주소

    printf("num = %d\n", num);
    printf("num의 크기 %ubytes\n", sizeof(num));
    printf("num의 주소 : %p\n", &num);

    // Pointer(포인터) 변수 : 무조건 주소만 저장할 수 있다.
    // 자료형* 변수명;

    short* addr = &num; // short* 형을 갖는 변수 addr을 선언하고, num의 주소를 저장한다.
    printf("addr의 크기 : %ubytes\n", sizeof(addr));
    printf("addr의 값 : %p\n", addr);

    //addr = 100; 이런 코드는 안됨
    printf("addr이 참조하는 곳의 값 : %d\n", *addr);
    *addr = 20;
    printf("num = %d\n", num);


    long long num2 = 200000L;
    printf("num2 = %lld\n", num2);
    printf("num2의 크기 %ubytes\n", sizeof(num2));
    printf("num2의 주소 : %p\n", &num2);
    long long* addr2 = &num2;
    printf("addr2의 크기 : %ubytes\n", sizeof(addr2));
    printf("addr2의 값 : %p\n", addr2);
    printf("addr2이 참조하는 곳의 값 : %d\n", *addr2);

    int n1 = 10;
    int n2 = 20;
    int n3 = add(n1, n2); // 값에 의한 호출(Call by Value)

    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    printf("n3 = %d\n", n3);

    n3 = add(&n1, &n2); // 참조에 의한 호출(Call by Reference)
    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    printf("n3 = %d\n", n3);

    printf("=================\n");
    n1 = 5;
    n2 = 8;
    add(n1, n2, &n3);
    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    printf("n3 = %d\n", n3);

    int tmp = n1;
    /*n1 = n2;
    n2 = tmp;*/
    printf("=================\n");
    exchange(&n1, &n2);
    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);

    return 0;
}

