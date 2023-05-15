#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    int i, j;
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    int b[3][2] = { 0 };
    int c = 0;
    int n = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            b[i][j] = a[j][i] + b[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 1; j++) {
            c += a[j][i] * b[i][j];
        }
    }

    printf("%d ", c);

    for (i = 0; i < 3; i++) {
        for (j = 1; j < 2; j++) {
            n += a[j][i] * b[i][j];
        }
    }
    
    printf("%d ", n);

    return 0;
}