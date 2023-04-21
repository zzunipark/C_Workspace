#include <stdio.h>
#pragma warning(disable:4996)

void name(int n) {
    if (n == 0) {
        return;
    }
    printf("recursive\n");
    name(n - 1);
}

void num(int n) {
    if (n == 0) {
        return;
    }
    printf("%d\n", n);
    num(n - 1);
}

int fac(int n) {
    if (n == 1) {
        return 1;
    }
    return n * fac(n-1);
}

int re_sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + re_sum(n - 1);
}

int hap(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + hap(n / 10);
}

void binary(int n) {
    if (n == 0) {
        return;
    }    
    binary(n / 2);
    printf("%d ", n % 2);
}

void reverse(int n) {
    if (n == 0) {
        return;
    }
    printf("%d", n % 10);
    reverse(n / 10);
}

int main() {
    int n;

    // recursive 10번 출력
    name(10);

    // 10부터 1까지 출력
    num(10);

    // 팩토리얼
    printf("\n8!=%d\n", fac(8));
    
    // 1부터 100까지의 합을 구하는 재귀함수
    printf("%d\n", re_sum(100));

    // 각 자리수의 합을 출력하는 재귀함수
    printf("%d\n", hap(123456789));

    // 10진수를 2진수로 변경
    binary(18);

    reverse(12345);

    return 0;
}