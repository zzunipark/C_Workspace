#include <stdio.h>
#pragma warning(disable:4996)

int total = 0;
int sumpt(int *pt) {
    int a;
    for(a = 0; a < 5; a = a+1) {
        if(*(pt+a) % 2 == 0) total = total + *(pt+a);
    }
    return total;
}

int main(void) {
    int numpt[ ] = {89, 74, 36, 45, 98};
    printf("%d ", sumpt(numpt));
    return 0;
}