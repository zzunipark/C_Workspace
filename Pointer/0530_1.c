#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int b[5] = { 1, 2, 3, 4, 5 };
    int* pb = &b[4];
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += *pb;
        pb--;
    }

    printf("%d", sum);

    return 0;
}