#include <stdio.h>
#pragma warning(disable:4996)
void re_call(int n);
void re_print(int n);
int fac(int n);
void re_binary(int n);

int main() {
    int n;
    // re_call(10);
    scanf("%d", &n);
    re_print(n);
    printf("%d ", fac(n));
    re_binary(n);

    return 0;
}

void re_call(int n) {
    if(n==0) {
        return;
    }
    re_call(n-1);
    printf("%d c programming\n", n);
}

void re_print(int n) {
    if(n == 0) {
        return;
    }
    re_print(n -1);
    printf("%d ", n);
}

int fac(int n) {
    if(n == 1) {
        return 1;
    }
    return fac(n - 1) * n;
}

void re_binary(int n) {
    if(n == 0) {
        return;
    }
    re_binary(n/2);
    printf("%d", n%2);
}