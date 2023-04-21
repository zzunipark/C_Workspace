#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int i, j, count = 0;

    for(i = 0; i< 5; i++) {
        count = count +1;
        for(j = 5; j > i; j--) {
            count = count + 1;
        }
        printf("%d\n", count);
    }

    return 0;
}