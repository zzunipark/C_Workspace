#include <stdio.h>
#pragma warning(disable:4996)
void plusten(int n);
void minusten(int n);
void star(int n);

int main() {
    int n;
    scanf("%d", & n);

    plusten(n);
    minusten(n);

    star(n);
    star(4);
    star(9);

    printf("%d", n);

    return 0;
}

void plusten(int n) {
    printf("10큰수 %d\n", n + 10);
}

void minusten(int n) {
    printf("10작은수 %d\n", n - 10);
}

void star(int n) {
    int i = 0, j = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}