#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main() {
    int crr[5][5];
    int i, j;
    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            crr[i][j] = rand() % 25 + 1;
        }
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%3d", crr[i][j]);
        }
        printf("\n");
    }
}