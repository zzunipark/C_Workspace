#include <stdio.h>
#pragma warning(disable:4996)
void num(int n);
int fac(int n);
int hap(int a);

int main() {
    // int n;
    // scanf("%d", &n);
    // num(n);

    printf("%d!=%d\n", 5, fac(5));
    printf("%d\n", hap(12345));

    return 0;
}

int hap(int n) {
    if(!n) {
        return 0;
    }
    return (n%10)+hap(n/10);
}

int fac(int n) {
    if (n == 1) {
        return 1;
    }
    return n*fac(n-1);
}

void num(int n) {
    if (!n) {
        return;
    }
    num(n - 1);
    printf("%d ", n);
}