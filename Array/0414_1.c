#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)
#define SIZE 5

int main() {
    // int arr[5], i;
    //
    // for(i = 0; i < 5; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // for(i = 0; i < 5; i++) {
    //     printf("%d", arr[i]);
    // }

    // int arr[10], i;
    // srand((unsigned)time(NULL));
    //
    // for(i = 0; i < 10; i++) {
    //     arr[i] = rand() % 19 + 1;
    // }
    // for(i = 0; i < 10; i++) {
    //     printf("%d ", arr[i]);
    // }

    // int arr[5];
    // int i, sum = 0, avg = 0;
    //
    // for(i = 0; i < 5; i++) {
    //     scanf("%d", &arr[i]);
    //     sum += arr[i];
    //     avg += (arr[i]) / 5;
    // }
    //
    // printf("합 : %d, 평균 : %d", sum, avg);

    // int scores[10];
    // int i;
    //
    // for(i = 0; i < 10; i++) {
    //     scores[i] = 10;
    //     printf("%d ", scores[i]);
    // }
    //
    // return 0;

    // int scores[] = { 1, 2, 3, 4, 5, 6 };
    // int i, size;
    //
    // size = sizeof(scores) / sizeof(scores[0]);
    //
    // for (i = 0; i < size; i++) {
    //     printf("%d ", scores[i]);
    // }

    // int a[SIZE] = {1, 2, 3, 4, 5};
    // int b[SIZE];
    // int i;
    //
    // for(i = 0; i < SIZE; i++) {
    //     b[i] = a[i];
    // }
    // for(i = 0; i < SIZE; i++) {
    //     printf("%d ", a[i]);
    //     printf("%d ", b[i]);
    // }

    // int a[SIZE] = { 1, 2, 3, 4, 5 };
    // int b[SIZE];
    // // for (int i = 0; i < SIZE; i++) {
    // //     b[i] = a[i];
    // // }
    // for (int i = 0; i < SIZE; i++) {
    //     if (a[i] != b[i]) {
    //         printf("배열이 다릅니다.\n");
    //         return 0;
    //     }
    // }
    // printf("배열이 같습니다.\n");

    int dice[6] = { 0 };
    for(int i = 0; i < 6; i++) {
        dice[rand() % 6]++;
    }
    for(int i = 0; i < 6; i++) {
        printf("%d %d\n", i, dice[i]);
    }

}