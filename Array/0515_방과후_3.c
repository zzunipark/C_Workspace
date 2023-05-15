#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int i, j;
    int a[3][2] = { 1, 2, 3, 4, 5, 6 };
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        puts("");
    }
    return 0;
}