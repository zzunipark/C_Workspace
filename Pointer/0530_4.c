#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    int size = strlen("my string.");
    printf("%d\n", size);

    char dst[6];
    char src[6] = "hello";
    strcpy(dst, src);
    puts(dst);

    char dst1[12] = "hello ";
    char src1[6] = "world";
    strcat(dst1, src1);
    puts(dst1);

    printf("%d\n", strcmp("dog", "dog"));
    printf("%d\n", strcmp("dog", "cat"));
    printf("%d\n", strcmp("cat", "dog"));

    char a1[80];
    char b1[80];
    printf("input string > ");
    gets(a1);
    printf("input string > ");
    gets(b1);
    /*puts(a1);
    puts(b1)*/
    if(strcmp(a1, b1) == 0) {
        printf("%s와 %s가 같습니다.\n", a1, b1);
    } else if(strcmp(a1, b1) > 0) {
        printf("%s가 %s보다 뒤에 있습니다.\n", a1, b1);
    } else {
        printf("%s가 %s보다 뒤에 있습니다.\n", a1, b1);
    }

    return 0;
}