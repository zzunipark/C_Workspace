#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    char str[] = "C language is easy.";
    char cnt = 0;
    while(str[cnt]!='\0') {
        cnt++;
    }
    printf("%d, sizeof: %d\n", cnt, sizeof(str));

    return 0;
}