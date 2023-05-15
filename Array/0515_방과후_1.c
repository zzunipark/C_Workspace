#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int i, j;
    int a[2][3] = { 1, 2, 3, 4, 5, 6 };
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        puts("");
    }
    return 0;
}