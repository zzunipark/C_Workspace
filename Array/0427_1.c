#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main() {
    int a[5][5]={0}, i, j;
    srand((unsigned)time(NULL));
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            a[i][j] = rand() % 50 + 1;
            a[i][4] += a[i][j];
            a[4][j] += a[i][j];
            a[4][4] += a[i][j];
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}