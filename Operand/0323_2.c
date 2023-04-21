#include <stdio.h>
#pragma warning(disable:4996);

int main() {
    int i = 1;
    int cnt = 0;
    while (i <= 30) {
        if (i % 3 == 0) {
            i++;
            continue;
        }
        printf("%3d ", i++);

        cnt++;

        if (cnt % 3 == 0) {
            printf("\n");
            cnt = 0;
        }
    }

    return 0;
}