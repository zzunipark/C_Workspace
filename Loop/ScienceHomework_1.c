#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    // int a, b = 0;
    // printf("1 => 1\n");
    // for(a = 2; a <= 20; a++) {
    //     printf("%d -> %d\n", a, b);
    //     b++;
    //     if (b == 8) {
    //         b = 0;
    //     }
    // }

    // 1부터 9까지 구구단 출력

    int i, j = 0;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }

    // 1부터 100까지의 합

    int sum = 0;
    for (i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("1부터 100까지의 합: %d\n", sum);

    // 1부터 100까지의 홀수의 합

    sum = 0;
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 1) {
            sum += i;
        }
    }
    printf("1부터 100까지의 홀수의 합: %d\n", sum);

    // 1부터 100까지의 짝수의 합

    sum = 0;
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf("1부터 100까지의 짝수의 합: %d\n", sum);

    
}