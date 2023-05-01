#include <stdio.h>
#pragma warning(disable:4996)
int fac(int a, int b);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    fac(a, b);
    printf("%d", fac(a, b));
}

int fac(int a, int b) {
    if(a == b) {
        return a;
    } else {
        return b * fac(a, b-1);
    }
}