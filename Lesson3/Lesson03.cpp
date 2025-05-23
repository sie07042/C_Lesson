#include <stdio.h>

int main() {
	
	// 연산자
	// 산술연산자 : +,-,*,/,%
	// 대입연산자 : =,+=,-=,/=,%=
	// 증감연산자 : ++,--
	// 비교연산자 : >,>=,<,<=,==
	// 논리연산자 : &&,||,!
	// 비트연산자 : <<,>>,&,|,^,~
	// 기타연산자 : ? :,&,*

	int n1 = 10;
	int n2 = 3;
	int n3;
	float f1;

	n3 = n1 + n2;
	printf("%d + %d = %d\n", n1, n2, n3);

	n3 = n1 - n2;
	printf("%d - %d = %d\n", n1, n2, n3);

	n3 = n1 * n2;
	printf("%d * %d = %d\n", n1, n2, n3);

	f1 = n1 / (float)n2;
	printf("%d / %d = %f\n", n1, n2, f1);

	n3 = n1 % n2;
	printf("%d / %d = %d\n", n1, n2, n3);

	// 형변환 : 형변환은 데이터의 손실이 발생될 수 있다.
	char n = 100; // -128 ~ 127
	n1 = 300;
	n = (char)n1; // 묵시적 형변환
	f1 = 3.3333F;
	n1 = f1; // 소수점이하는 소실됨, 묵시적 형변환
	n1 = (int)f1;

	return 0;
}