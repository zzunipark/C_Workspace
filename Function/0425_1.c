#include <stdio.h>
#pragma warning(disable:4996)

int fibo(int n) {
    if(n == 0) {
        return 0;
    } if(n == 1) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    } 
}

int main() {
    int n = 0, fibo[10] = { 0,1 };
    for (int i = 2; i < 10; i++) {
        fibo[i] += fibo[i - 1] + fibo[i - 2];
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibo[i]);
    }

    return 0;
}