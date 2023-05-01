#include <stdio.h>
#pragma warning(disable:4996)
int fibo(int n);

int main() {
    printf("%d\n", fibo(5));
    return 0;
}

int fibo(int n) {
    printf("%d ", n);
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}