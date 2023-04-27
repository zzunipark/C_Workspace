#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996);

int main()
{
    int a[5];
    srand((unsigned)time(NULL));
    
    for (int i = 0; i < 5; i++) {
        a[i] = rand() % 25 + 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}