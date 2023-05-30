#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a[6] = { 1, 2, 3, 4, 5, 6 };
    int* fp = a;
    int* rp = &a[5];
    int tmp;

    for(int i = 0; i < 3; i++) {
        tmp = *fp;
        *fp = *rp;
        *rp = tmp;
        fp++;
        rp--;
    }
    
    for (int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
}