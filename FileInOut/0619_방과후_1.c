#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
    FILE * fp = NULL;
    fp = fopen("charsample.txt", "w");
    if( fp == NULL ) {
        printf("파일 열기 실패\n");
        return 1;
    }
    fputc('l', fp);
    fputc('o', fp);
    fputc('v', fp);
    fputc('e', fp);
    fclose(fp);
    return 0;
}