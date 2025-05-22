#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	int n = 1 + 5;

	/*
	switch (변수(또는 함수, 수식))
	{
	case n1:
		위 변수가 n1과 같을때 실행되는 명령문들...;
		break;
	case n2:
		위 변수가 n2과 같을때 실행되는 명령문들...;
		break;
	case n3:
		위 변수가 n3과 같을때 실행되는 명령문들...;
		break;
	case n4:
		위 변수가 n4과 같을때 실행되는 명령문들...;
		break;
	...
	default:
		위 변수가 모든 case에 해당되지 않을때 실행되는 명령문들...;
	}
	*/

	// 사용자로부터 메뉴를 선택받아서 해당 메뉴를 출력하는 코드를 작성
	printf("1. 새파일\n");
	printf("2. 파일열기\n");
	printf("3. 파일저장\n");
	printf("4. 인쇄\n");
	printf("=================\n");
	printf("0. 프로그램 종료\n");
	printf("=================\n");

	printf("메뉴 번호를 선택하여 입력하세요 >>>");
	int menu;
	scanf("%d", &menu);
	printf("선택된 메뉴는 %d\n", menu);

	switch (menu)
	{
	case 1:
		printf("새파일이 선택되었습니다.\n");
		break;
	case 2:
		printf("파일열기가 선택되었습니다.\n");
		break;
	case 3:
		printf("파일저장이 선택되었습니다.\n");
		break;
	case 4:
		printf("인쇄가 선택되었습니다.\n");
		break;
	case 0:
		printf("프로그램을 종료합니다.\n");
		break;
	default:
		printf("알 수 없는 값이 입력되었습니다.\n");
	}
	return 0;
}