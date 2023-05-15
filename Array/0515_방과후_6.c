#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int array[5][10];

    for (int i = 0; i < 10; i++) {
        array[0][i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        array[1][i] = i + 11;
    }

    for (int i = 0; i < 10; i++) {
        array[2][i] = array[0][i] + array[1][i];
    }

    for (int i = 0; i < 10; i++) {
        array[3][i] = array[1][i] - array[0][i];
    }

    for (int i = 0; i < 10; i++) {
        array[4][i] = array[2][i] * array[3][9 - i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}