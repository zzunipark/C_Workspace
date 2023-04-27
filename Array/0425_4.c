#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int brr[2][3];
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &brr[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", brr[i][j]);
        }
        printf("\n");
    }
}