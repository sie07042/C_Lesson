#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char ch =1;
	short sh = 2;
	int num = 3;

	float r1 = 1.0;
	double r2;

	printf("ch변수의 값은 %d이고 ch의 메모리 할당 크기는 %dbytes 입니다.\n", ch, sizeof(ch));
	printf("r1변수의 값은 %f이고 r1의 메모리 할당 크기는 %dbytes 입니다.\n", r1, sizeof(float));


	// 배열(Array)
	// 인덱싱은 배열에서 값을 가져오는 방법
	// 인덱스는 배열의 원소들의 개수 - 1만큼 지정이 가능하다.
	int nums[5] = {10,20,30,40,50};
	printf("nums 배열의 첫번째 값 : %d\n", nums[0]);
	printf("nums 배열의 두번째 값 : %d\n", nums[1]);
	printf("nums 배열의 다섯번째 값 : %d\n", nums[4]);

	nums[0] = 60;
	//nums[0] =3.14F;
	for (int i = 0; i < 5; i++)
	{
		printf("nums[%d] = %d\n", i, nums[i]);
	}

	//
	short score[] = { 100,90,80,70 };
	short sum = 0;
	// score 배열의 모든 원소들의 합계를 구하는 코드를 작성하세요
	for (short i = 0; i < 4; i++) //i가 0부터 4보다 작은동안 i값을 1씩 증가시키면서 반복
	{
		sum += score[i];
	}
	printf("총점 %d점\n:", sum);
	printf("평균 %.2f점\n:", sum/4.F);

	//int nums[5] = {10,20,30,40,50};
	/*
	nums[0] : 1
	*/

	for (int i = 0; i < 5; i++)
	{
		nums[i] = i+1;
		printf("nums[%d] = %d\n", i, nums[i]);
	}

	printf("nums배열의 크기 : %d bytes\n", sizeof(nums));

	int nums2[] = { 1,3,4,6,3,5,7,2,3,5,7,8,6,7,9,5,3,7,8,4,7,9,5,4,3,6,8,9,5,4,1 };
	printf("nums2배열의 크기 : %d bytes\n", sizeof(nums2));
	printf("nums2배열의 길이 : %d 개\n", sizeof(nums2)/sizeof(int));
	int count = sizeof(nums2) / sizeof(int); // 배열의 원소들의 개수를 구함
	for (int i = 0;i < count;i++)
	{
		printf("%d", nums2[i]);
	}

	return 0;
}

