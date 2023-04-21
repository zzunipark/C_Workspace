#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int cnt = 0, grade = 0, sum2 = 0;
    while (grade >= 0) {
        printf("imput num>> ");
        scanf("%d", &grade);
        cnt++;;
        sum2 += grade;
    }

    cnt--;
    printf("sum : %d avg : %.2f\n", sum2, (double)sum2 / cnt);

    // int i, sum=0, n;
    // for (i = 0; i < 5; i++) {
    //     printf("input num>> ");
    //     scanf("%d", &n);
    //     sum += n;
    // }
    // printf("sum : %d avg : %.2f\n", sum, (double) sum / i);

    // int i = 1;
    // while (i <= 10) {
    //     printf("%d %d\n", i, i*i);
    //     i++;
    // }

    // int n, i = 1, fac = 1;
    // scanf("%d", &n);
    // while (i <= n) {
    //     fac *= i;
    //     i++;
    // }
    // printf("%d", fac);

    // int n, i;
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++) {
    //     if(n % i == 0) {
    //         printf("%d ", i);
    //     }
    // }
    // printf("\n");

    // int n, i, cnt=0, prime=0;
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++) {
    //     if (!(n % i)) {
    //         cnt++;
    //         if (cnt > 2) {
    //             prime = 1;
    //             break;
    //         }
    //     }
    // }
    // if (prime) {
    //     printf("소수가 아닙니다.\n");
    // } else {
    //     printf("소수 입니다.\n");
    // }

    // int i, j, cnt, t_cnt=0;
    // for (i = 2; i <= 100; i++) {
    //     cnt = 0;
    //     for (j = 1; j <= i; j++) {
    //         if (!(i % j)) {
    //             cnt++;
    //             if (cnt > 2) {
    //                 break;
    //             }
    //         }
    //     }
    //     if (cnt == 2) {
    //         printf("%d ", i);
    //         t_cnt++;
    //     }
    // }
    // printf("\n%d\n", t_cnt);

    // int n, i, cnt = 0
    // printf("input number > ");
    // scanf("%d", &n);
    // printf("%d의 약수 : ", n);
    // for(i = 1; i <= n; i++) {
    //     if (!(n % i)) {
    //         printf("%d ", i);
    //         cnt++;
    //     }
    // }
    // printf("\n약수의 개수 : %d\n", cnt);

    // int dan=2, j;
    // while(dan < 10) {
    //     j = 1;
    //     while(j < 10) {
    //         printf("%d * %d = %d\n", dan, j, dan * j);
    //         j++;
    //     }
    //     dan++;
    // }

    // int i, j;
    // for(i = 2; i < 10; i++) {
    //     for(j = 1; j < 10; j++) {
    //         printf("%d * %d =  %d\n", i, j, i*j);
    //     }
    //     printf("\n");
    // }
}