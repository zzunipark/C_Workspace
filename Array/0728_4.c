#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int i = 0;
    for (int j = 0; j < 1000; j++) {
        if(j % 3 == 0 || j % 5 == 0)
        i += j;
    }
    printf("%d", i);
}