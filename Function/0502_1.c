#include <stdio.h>
#pragma warning(disable:4996)
void inc();
int i = 10;

int main() {
    //int i = 10;
    printf("함수 호출 전 : i=%d\n", i);
    inc();
    printf("함수 호출 후 : i=%d\n", i);

    return 0;
}

void inc() {
    i++;
}