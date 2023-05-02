#include <stdio.h>
#pragma warning(disable:4996)

void sub() {
    static int scnt = 0;
    int acnt = 0;
    printf("scnt = %d\n", scnt);
    printf("acnt = %d\n", acnt);
    scnt++;
    acnt++;
}

int main() {
    sub();
    sub();
    sub();

    return 0;
}