#include <stdio.h>

int main() {

	// +,-,*,/,%
	int num = 1;
	int sum = 0;
	sum += num; // sum = sum + num; ==> sum = 1
	sum += num; // sum = sum + num; ==> sum = 2
	sum -= num;
	sum *= num;
	sum /= num;
	sum %= num;

	// 비교 연산자 : >, >=, <, <=, ==, !=
	// 비교 연산을 수행한 결과는 항상 논리값(1,0)
	int result;
	result = 1 > 5;
	printf("result = %d\n", result);

	result = 1 <= 5;
	printf("result = %d\n", result);

	result = 1 == 5;
	printf("result = %d\n", result);

	printf("=============================\n");

	// 논리 연산자 : &&(AND), ||(OR), !(NOT)
	num = -5;
	sum = 0;
	result = num && sum; // T && F ===> F
	printf("result = %d\n", result);

	result = num || sum; // T || F ===> T
	printf("result = %d\n", result);

	result = !num; //-5 True이고 ===> False로 반전
	printf("result = %d\n", result);

	printf("=============================\n");

	// 증감 연산자 : ++, --
	num = 0;
	num++; // num = num + 1;, num += 1;
	printf("num = %d\n", num);
	
	++num; // num = num + 1;
	printf("num = %d\n", num);

	printf("num = %d\n", num++);
	printf("num = %d\n", ++num);

	//
	sum = -num; // -가 부호연산자로 사용됨

	// 연산자 우선순위 : 시험에 자주 출제
	/*
	1 : ++, --
	2 : +, - (부호 연산자)
	3 : *, /, &
	4 : +, -
	5 : >, <=, <, <=
	6 : ==, !=
	7 : 논리연산자
	8 : 대입연산자
	*/ 


	return 0;
}