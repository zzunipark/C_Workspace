#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
    FILE * fp;
    fp = fopen("stringsample.txt", "w");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }
    fputs("I love programming \n", fp);
    fclose(fp);
    return 0;
}
