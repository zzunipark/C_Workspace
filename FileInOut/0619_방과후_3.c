#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
    FILE * fp;
    char stringline[50];
    fp = fopen("stringsample.txt", "r");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }

    // fgets(stringline, sizeof(stringline), fp);
    // printf("%s", stringline);
    // fclose(fp);

    while(fgets(stringline, 50, fp) != NULL) {
        puts(stringline);
    }
    fclose(fp);

    return 0;
}