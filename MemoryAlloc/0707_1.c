#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *list;
    list = (int *)malloc(3*sizeof(int));

    if(list == NULL) {
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }

    list[0] = 10;
    list[1] = 20;
    list[2] = 30;

    free(list);
    return 0;
}