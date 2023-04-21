#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    // 최소공배수 구하는 프로그램
    int a = 0, b = 0, c = 0, r = 0;

    printf("두 정수 입력 >> ");
    scanf("%d %d", &a, &b);

    c = a * b;
    while (b != 0) {
        r = a%b;
        a = b;
        b = r;
    }
    
    printf("최대공약수 : %d\n 최소공배수 : %d\n", a, c / a);

    // 입력받은 정수의 약수를 구하는 프로그램
    // int n, i, cnt = 0;
    //
    // printf("input number >> ");
    // scanf("%d", &n);
    //
    // n = get_number();
    //
    // for (i = 1; i <= n; i++) {
    //     if(n % i == 0) {
    //         printf("%d ", i);
    //     }
    // }
    //
    // 입력받은 정수가 소수(1과 자기자신만을 약수로 갖는 수 : 약수 개수가 2개) 인지 판단하는 프로그램
    //
    // cnt = 0;
    //
    // n = get_number();
    //
    // for (i = 1; i <= n; i++) {
    //     if(n % i == 0) {
    //         cnt++;
    //     }
    // }
    //
    // if(cnt == 2) {
    //     printf("소수임 ㅋ");
    // } else {
    //     printf("소수아님");
    // }

    return 0;
}