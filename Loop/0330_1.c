#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int i, j, cnt = 0, y = 0, z = 0;

    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        for (j = 5; i<j; j--) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        for(j = 0; j < 5 - i; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        for(j = 0; j <= i; j++) {
            printf(" ");
        } for (j = 5; i < j; j--) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for( i = 0; i < 5; i++) {
        for (j = 0; j < 5 - 1 - i; j++) {
            printf(" ");
        } for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (i = 5; i > 0; i--) {
        for (j = 5-i; j > 0; j--) {
            printf(" ");
        } for (j = 2*i-1; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for(i = 0; i < 4; i++) {
        for (j = 0; j < 5 - 1 - i; j++) {
            printf(" ");
        } for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 5; i > 0; i--) {
        for (j = 5-i; j > 0; j--) {
            printf(" ");
        } for (j = 2*i-1; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            cnt++;
            printf("%d ", cnt);
        }
        printf("\n");
    }
    printf("\n");

    printf("input number >> ");
    scanf("%d", &y);

    cnt=0;

    for (i = 0; i < y; i++) {
        for (j = 0; j <= i; j++) {
            cnt++;
            printf("%d ", cnt);
        }
        printf("\n");
    }
    printf("\n");

    printf("input number >> ");
    scanf("%d", &z);

    cnt=64;

    for (i = 0; i < z; i++) {
        for (j = 0; j <= i; j++) {
            cnt++;
            printf("%c ", cnt);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}