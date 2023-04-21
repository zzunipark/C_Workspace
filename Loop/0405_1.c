#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    // int i, j, num;
    // for (i = 10; i >= 7; i--) {
    //     printf("%d ", i);
    // }

    // i = 10;
    // while(i >= 7) {
    //     printf("%d ", i);
    //     i--;
    // }

    // int i, j;

    // for(i = 1; i <= 100; i++) {
    //     if(i % 3 == 0) {
    //         printf("%d ", i);
    //     }
    // }

    // for(i = 3; i <= 100; i+=3) {
    //     printf("%d ", i);
    // }

    // i = 4;
    // while(i <= 100) {
    //     if(i % 3 == 0) {
    //         printf("%d ", i);
    //     }
    //     i++;
    // }

    // int num, min = 99999;
    // for(;;) {
    //     printf("데이터를 입력하시오.(0을 입력하면 종료): ");
    //     scanf("%d", &num);
    //     if(num == 0) {
    //         break;
    //     }
    //     if(num < min) {
    //         min = num;
    //     }
    // }
    // printf("%d", min);

    // int num = 20, min = 99999;
    // while(num != 0) {
    //     printf("데이터를 입력하시오.(0을 입력하면 종료): ");
    //     scanf("%d", &num);
    //
    //     if(num < min) {
    //         min = num;
    //     }
    // }
    // printf("최솟값 : %d", min);

    // int fuel = 0, distance = 0;
    // char select;
    //
    // do {
    //     printf("연료의 양을 입력하시오(l): ");
    //     scanf("%d", &fuel);
    //     printf("주행한 거리를 입력하시오(km): ");
    //     scanf("%d", &distance);
    //     printf("연비는 %dkm/l입니다.\n", distance/fuel);
    //     printf("다시 계산하겠습니까?(Y/N): ");
    //     getchar();
    //     scanf("%c", &select);
    // } while(select == 'y' || select == 'Y');

    // char a;
    //
    // printf("한줄의 문자열을 입력하시오: ");
    // while((a = getchar()) != '\n') {
    //     if(a >= 'a' && a <= 'z') {
    //         a = a - 32;
    //     }
    //     printf("%c", a);
    // }

    // char ch, cnt = 0;
    //
    // printf("한 줄의 문자를 입력하세요: ");
    // while((ch = getchar()) != '\n') {
    //     if(ch == 'a') {
    //         cnt++;
    //     }
    // }
    // printf("a의 개수 : %d", cnt);

    // int i, sum = 0;
    //
    // for(i = 1; i <= 10; i++) {
    //     sum = sum + i;
    // }
    // printf("합 : %d", sum);

    // int i = 1, sum = 0;
    //
    // while(i <= 10) {
    //     sum = sum + i;
    //     i++;
    // }
    // printf("합 : %d\n", sum);

    // int i, fac = 1;
    //
    // for(i = 1; i <= 10; i++) {
    //     fac = fac * i;
    // }
    // printf("값 : %d\n", fac);

    // int i = 1, fac = 1;
    //
    // while(i <= 10) {
    //     fac = fac * i;
    //     i++;
    // }
    //
    // printf("값 : %d\n", fac);

    // int a, i, cnt = 0; // cnt가 약수의 갯수
    //
    // scanf("%d", &a);
    // printf("약수 : ");
    // for(i = 1; i <= a; i++) {
    //     if(a % i == 0) {
    //         cnt++;
    //         printf("%d ", i);
    //     }
    // }
    // printf("\n");
    // printf("약수의 개수 : %d\n", cnt);

    int a, b;

    printf("두 수를 입력하세요. ");
    scanf("%d%d", &a, &b);

    

    return 0;
}