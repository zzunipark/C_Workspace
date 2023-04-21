#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a=1;
    int b;
    int sum;

    scanf("%d", &b);
    while (a <= b) {
        if (a%2 == 1){ 
            printf("%d ", a);
        } else {
            printf("-%d  ", a);
        }
        a++;
    }

    printf("다 더한 값은 15\n");

    return 0;
} 