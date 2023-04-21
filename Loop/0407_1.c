/*
#include <stdio.h>
#pragma warning(disable:4996)
int re_fac(int n);
int re_max(int a, int b);

int main() {

    // 1번문제
    //
    // int n, sum = 0;
    //
    // do {
    //     scanf("%d", &n);
    //     sum += n;
    // } while (n!=0);
    //
    // printf("%d\n", sum);

    // 2번문제 약수 n%i==0
    //
    // int n, i;
    // scanf("%d", &n);
    //
    // for(i = 1; i <= n; i++) {
    //     if(n % i == 0) {
    //         printf("%d ", i);
    //     }
    // }

    // 3번문제 : /, % (123/10=12 12/10=1 i/10=0, 123%10=3 12%10=2 1%10=i)
    //
    // int n, sum = 0;
    // scanf("%d", &n);
    //
    // while(n!=0) {
    //     sum = sum + (n % 10);
    //     n = n / 10;
    // }
    //
    // printf("%d\n", sum);

    // 4번문제
    // int a, b, temp, i, j;
    // scanf("%d %d", &a, &b);

    // if (a > b) {
    //     temp = a;
    //     a = b;
    //     b = temp;
    // }

    // for(i = a; i <= b; i++) {
    //     for(j = 0; j <= 9; j++) {
    //         printf("%d * %d = %d ", i, j, i*j);
    //     }
    //     printf("\n");
    // }

    // 5번문제
    //
    // int n;
    //
    // scanf("%d", &n);
    // for(int i = n; i > 0; i--) {
    //     for(int j = 0; j < i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // 6번문제
    
    int n, fac = 1;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        fac *= i;
    }
    
    printf("%d\n", re_fac(n));

    // 7번문제
    //
    // int a = re_max(2, 8);
    // int b = re_max(a, 6);
    //
    // printf("%d \n", b);
    // printf("%d \n", re_max(re_max(6, 2), 8));

    // 8번문제
    //
    // for (int i = 1; i <= 20; i++) {
    //     if(i % 3 == 0 || i % 2 == 0) {
    //         continue;
    //     } else {
    //         printf("%d ", i);
    //     }
    // }

    // 9번문제
    //
    // int n;
    // scanf("%d", &n);
    // switch (n/10) {
    //     case 10:
    //     case 9:
    //         printf("A\n");
    //         break;
    //     case 8:
    //         printf("B\n");
    //         break;
    //     case 7:
    //         printf("C\n");
    //         break;
    //     case 6:
    //         printf("D\n");
    //         break;
    //     case 5:
    //         printf("E\n");
    //         break;
    //     case 4:
    //     case 3:
    //     case 2:
    //     case 1:
    //     case 0:
    //         printf("E\n");
    //         break;

    //     default:
    //         printf("잘못입력함\n");
    //         break;
    // }

    return 0;
}

// 6번문제함수
// int re_fac(int n) {
//     if (n == 1) {
//         return 1;
//     }

//     return n * re_fac(n-1);
// }

// 7번문제함수
// int re_max(int a, int b) {
//     if(a > b) {
//         return a;
//     } else {
//         return b;
//     }
// }
*/

#include <stdio.h>

int main() {
    int num = 1;
    int sum = 0;

    while(num <= 10) {
        sum += num;
        num++;
    }
    printf("%d %d", num, sum);
}