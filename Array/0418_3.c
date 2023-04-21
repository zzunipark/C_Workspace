#include <stdio.h>
#pragma warning(disable:4996)
void star(int n);

int main() {
    int n;
    star(n);
}

void star(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for(j = 0; j <= i; i++) {
            printf("*");
        }
        printf("\n");
    }
}