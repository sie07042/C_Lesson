#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 10

void random_values(int arr[], int count) {
    if (!arr || !count)
        return;

    for (int i = 0; i < count; i++) {
        arr[i] = rand() % 100;
    }
}

void print_array(int arr[], int count) {
    if (!arr || !count)
        return;

    for (int i = 0; i < count; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n");
}

void exchange_value(int* p1, int* p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void sequence_sort(int arr[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (arr[i] > arr[j]) {
                exchange_value(&arr[i], &arr[j]);
            }
        }
    }
}

/*
find_value : 순차 탐색 함수
반환값 : int, 찾은 값의 인덱스, 찾을 값이 배열에 없다면 -1을 반환

매개변수
int arr[] : 대상 배열
int count : 배열의 요소들의 갯수
int t0_find : 대상 배열에서 찾을 값
*/
int find_value(int arr[], int count, int to_find) {
    for (int i = 0; i < count; i++) {
        if (arr[i] == to_find) {
            return i; 
        }
    }
    return -1; 
}

// 이진 탐색
int binary_search(int arr[], int count, int to_find)
{
    int start = 0; // 초기 시작 인덱스
    int end = count - 1; // 초기 마지막 인덱스

    while (start < end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == to_find)
            return mid;
        if (arr[mid] > to_find)
            end = mid - 1;
        else
            start = mid + 1;
    }
}


int main() {
    int arr[COUNT] = { 0 };

    srand((unsigned int)time(NULL));
    random_values(arr, COUNT);

    printf("==========초기값========\n");
    print_array(arr, COUNT);

    sequence_sort(arr, COUNT); // 순차 정렬 함수 호출

    printf("==========정렬 후========\n");
    print_array(arr, COUNT);

    printf("==========순차 탐색 테스트========\n");

    printf("찾을 값을 입력하세요 >>>");
    int num;
    scanf("%d", &num); // 찾을 값
    int idx = find_value(arr, COUNT, num);
    if (idx < 0)
        printf("%d를 배열에서 찾지 못 햇습니다.\n", num);
    else
        printf("%d는 배열의 [%d] index 위치에 있습니다\n", num,idx);

    return 0;
}
