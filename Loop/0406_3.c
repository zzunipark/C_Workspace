#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    // 10진수 정수를 입력받아 16진수, 8진수로 출력

    // int num;
    // printf("10진수 정수를 입력하세요. ");
    // scanf("%d", &num);

    // printf("%s = %x\n", "16진수", num);
    // printf("%s = %o\n", "8진수", num);

    // 사용자로부터 두 개의 정수를 입력받아 구구단을 출력하는 프로그램을 작성해 보자. (단, 2개의 입력 순서에 상관 없이 같은 결과를 출력해야 한다.)

    // int num1, num2;
    // printf("두 개의 정수를 입력하세요. ");
    // scanf("%d%d", &num1, &num2);

    // if (num1 > num2) {
    //     for (int i = 1; i < 10; i++) {
    //         printf("%d * %d = %d\n", num1, i, num1 * i);
    //     }
    // }
    // else {
    //     for (int i = 1; i < 10; i++) {
    //         printf("%d * %d = %d\n", num2, i, num2 * i);
    //     }
    // }

    // 두개의 정수를 입력받아서 최대공약수, 최소공배수를 구하는 프로그램을 작성해보자.6 (유클리드 호제법)
    
    int num1, num2;
    printf("두 개의 정수를 입력하세요. ");
    scanf("%d%d", &num1, &num2);

    int gcd, lcm;
    int a = num1;
    int b = num2;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    gcd = a;
    lcm = num1 * num2 / gcd;

    printf("%s = %d\n", "최대공약수", gcd);
    printf("%s = %d\n", "최소공배수", lcm);

    return 0;
}