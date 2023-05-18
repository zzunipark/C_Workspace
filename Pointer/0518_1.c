#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a = 10, b = 20;
    int* pa = &a;
    int* pb = &b;
    int* temp;

    printf("%d %d\n", *pa, *pb);
    printf("%p %p\n", pa, pb);

    temp = pa;
    pa = pb;
    pb = temp;

    printf("%d %d\n", *pa, *pb);
    printf("%p %p\n", pa, pb);

    return 0;
}