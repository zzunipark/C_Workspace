#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    char src[] = "광주소프트웨어마이스터고등학교";
    char dst[100];
    
    int i;
    for(i = 0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }

    dst[i] = '\0';
    printf("%s", dst);

    return 0;
}