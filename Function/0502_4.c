#include <stdio.h>
#pragma warning(disable:4996)
int x;

void sub() {
    for(x = 0; x < 10; x++) {
        printf("*");
    }
}

int main() {
    for(x = 0; x < 10; x++) {
        sub();
    }

    return 0;
}