#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 함수 사용 규칙
// 1. 호출하기전에 반드시 함수가 정의되어 있어야 한다.
// 2. 함수를 호출할때는 정의된 형식과 완전하게 동일하게 호출해야한다.
// 3. 그 외 변수명 작성 규칙과 동일하게 정의한다.
// 4. 함수는 다른 함수 내부에 포함될수 없다. 반드시 독립적으로 존재해야 한다.

// 함수를 사용하는 이유는 : 코드의 재사용(생산성 높인다, productivity)

// 함수를 정의하는 방법
// 함수형(자료형) 함수명( [매개변수1, 매개변수2, ...]) {}
//
// 매개변수 : Parameters, Argments, 인수, 인자 (호출부로부터 초기화되는 지역변수)
//
// 함수의 정의
int add_number(int n1, int n2) {
    
    return n1 + n2; //retun 함수를 처리하고 결과를 호출부로 반환하는 명령
}

int add_number(int n1, int n2, int n3) {

    return n1 + n2 + n3; //retun 함수를 처리하고 결과를 호출부로 반환하는 명령
}

// 보이드 : 반환값이 없음, 호출한쪽에 결과를 반환하지 않는다.
void display_number(int n)
{
    printf("매개변수 : %d\n", n);
}

float get_pi() {
    return 3.14F;
}

int mutiply(int n1, int n2) {
    // retun n1 * n2;
    int result = 0;
    for (int i = 0; i < n2; i++) {
        result += add_number(result, n1);
    }
    return result;
}

// 1부터 n까지의 합을 구하여 반환하는 함수를 정의하고,
// main()함수에서 100을 입력하여 호출한 뒤 그 결과를 출력하세요.
int sum(int n1) {
    int result = 0; // 누적변수
    for (int i = 1; i <= n1; i++) {
        result += i; 
    }
    return result; 
}

// 반지름을 입력하면 원의 넓이 값을 구하는 함수를 정의하세요
// 매개변수로 반지름을 입력받도록 함수를 설계하세요.

float circle(float n1) {
    return get_pi()* n1 * n1;
}



int main()
{
    // 변수형 변수명 [= 초기화할 값];

    // Call a function (함수의 호출)
    int n = add_number(10, 20); // add_number() 함수를 호출하고 그 결과를 n에 저장한다.
    printf("n = %d\n",n);

    n = add_number(30, 5);
    printf("n = %d\n", n);

    /*int n1;
    int n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    n = add_number(n1, n2);*/

    display_number(50);

    printf("파이 : %.4f\n", get_pi());

    printf("%d\n", mutiply(4,6));

    printf("1부터 100까지의 합 : %d\n", sum(100));

    printf("원의 넓이 : %f\n", circle(3.5));

    return 0;
}


