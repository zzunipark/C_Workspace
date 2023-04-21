#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)
#define STUDENTS 5
#define SIZE 5

int main() {
    // double arr[SIZE];
    // int i;

    // for (i = 0; i < SIZE; i++) {
    //     printf("input num >> ");
    //     scanf("%lf", &arr[i]);
    // }
    
    // for (i = 0; i < SIZE; i++) {
    //     printf("%.2lf ", (double)arr[i]);
    // }
    // printf("\n");

    // int dice[6] = { 0 };
    // for (int i = 0; i < 10000; i++) {
    //     dice[rand() % 6]++; 
    // }
    // for (int i = 0; i < 6; i++) {
    //     printf("%d %d\n", i, dice[i]);
    // }

    int arr[10], i, max = 0, min = 51;
    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++) {
        arr[i] = rand() % 50 + 1;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    max = min = arr[0];

    for (i = 0; i < 10; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    printf("\n최대값 : %d, 최소값 : %d", max, min);
    return 0;
}