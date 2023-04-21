#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main() {
    // int i, arr[5] = { 10, 20, 30, 40, 50 };
    //
    // for(i = 0; i < 5; i++) {
    //     printf("%d", arr[i]);
    // }

    // int barr[5];
    // for(int i=0; i < 5; i++) {
    //     printf("Input Number >> ");
    //     scanf("%d", &barr[i]);
    // }
    // for(int i=0; i < 5; i++) {
    //     printf("%d", barr[i]);
    // }

    int arr[10], i;
    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++) {
        arr[i] = rand() % 101;
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}