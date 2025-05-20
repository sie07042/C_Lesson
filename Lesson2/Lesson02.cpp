#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	printf("안녕하세요\n");
	printf("안녕\n하세요\t");
	printf("tab만큼\t이동함\n");
	printf("Hello C\n");
	printf("\rWelcome C\n");
	printf("\b\bC++\n");
	printf("경기도 \"수원시\"\n");
	printf("c:\\test.txt\n");

	// 변수 선언
	int age = 10;
	char ch = 'k';
	short kor = 96;
	float pi = 3.14F;
	double math = 42.195;

	// 변수 출력
	printf("나이는 %d살 입니다\n", age);
	printf("%corea\n", ch);
	printf("국어점수 : %hd\n", kor);
	printf("PI : %f\n", pi);
	printf("PI : %4.2f\n", pi);
	printf("marathon : %6.1g\n", math);
	printf("marathon : %.3f\n", math);
	printf("%5d\n", age);
	printf("%-5d\n", age);

	// 16진수 출력
	printf("10 = %X\n", age);

	// %기호를 출력
	printf("상위 %ld%%\n", kor);

	// %s : 문자열 출력
	printf("내 이름은 %s 입니다\n", "홍길동");

	// %p : 특정 변수의 메모리 주소를 출력한다.
	printf("ch의 주소 : %p\n", &ch); // & : 주소 연산자, 변수앞에 단독으로 사용된 경우

	printf("내 이름은 %s이고, 나이는 %d살 입니다.","홍길동",age);

	printf("\n\n=====================================\n");

	// 표준 입력 함수 : scanf
	printf("나이를 입력하세요 >>> ");
	scanf("%d", &age); // 정수형 데이터 한개를 입력받는다.
	printf("내 이름은 %s이고, 나이는 %d살 입니다.\n", "홍길동", age);

	float height;
	printf("당신의 키를 입력하세요 >>> ");
	scanf("%f", &height);
	printf("입력받은 키는 %.2fcm입니다.\n",height);

	printf("알파벳 한자를 입력하세요 >>> ");
	scanf("%c", &ch);
	printf("입력된 알파벳은 %c입니다.\n", ch);

	printf("국어점수를 입력하세요 >>> ");
	scanf("%hd", &kor);
	printf("입력된 국어점수는 %d점입니다\n", kor);

	short eng;
	short history;
	printf("국어,영어,역사 점수를 입력하세요 >>>");
	scanf("%hd %hd %hd", &kor, &eng, &history);
	printf("국어:%d점, 영어:%d점, 역사:%d점\n", kor, eng, history);

	return 0;
}
