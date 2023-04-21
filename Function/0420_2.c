#include <stdio.h>
#pragma warning(disable:4996)

void swap(int * a, int * b);

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("before : a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("after : a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}