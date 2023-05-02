#include <stdio.h>
#pragma warning(disable:4996)
int add();
int A, B;

int main() {
    int ans;
    A = 5;
    B = 7;
    ans = add();
    
    printf("%d + %d = %d\n", A, B, ans);

    return 0;
}

int add() {
    return A + B;
}