#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int i, j;
    int a[2][3] = { 1, 2, 3, 4, 5, 6 };
    int b[2][3] = { 7, 8, 9, 10, 11, 12 };
    int c[2][3] = {};

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        puts("");
    }
    return 0;
}