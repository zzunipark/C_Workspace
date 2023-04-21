#include <stdio.h>
#pragma warning(disable:4996)
int max1(int x, int y);
int get_integer();

int main() {
    // int x, y, value;
    // printf("input 2 numbers>> ");
    // scanf("%d%d", &x, &y);

    // value=max1(x, y);
    // printf("큰수는 %d\n", value);

    int x = get_integer();
    int y = get_integer();
    printf("두 수의 합은 %d\n", x+y);

    return 0;
}

int get_integer() {
    int x;
    printf("input number>> ");
    scanf("%d", &x);
    return x;
}

int max1(int x, int y) {
    if(x>y) {
        return x;
    } else {
        return y;
    }
}