#include <stdio.h>
#pragma warning(disable:4996)
int add(int a, int b);
int sub(int a, int b);

int main() {
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = add(a, b);
    printf("두 수의 합 : %d\n", sum);
    printf("두 수의 차 : %d\n", sub(a, b));

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}