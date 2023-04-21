#include <stdio.h>
int hap(int n);

int main() {
    printf("%d\n", hap(123456789));
}

int hap(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + hap(n / 10);
}

// 1. 반복문을 사용하지 않고 "recoursive"를 10번 출력하는 프로그램을 작성하시오.
// void printrec(int n);
//
// int main() {
//     printrec(10);
// }
//
// void printrec(int n) {
//     if (n == 0) {
//         return;
//     }
//     printf("recoursive\n");
//     printrec(n - 1);
// }

// 2. 50 이하의 자연수 N을 입력받아 재귀함수를 이용하여 1부터 N까지의 정수를 차례대로 출력하는 프로그램을 작성하시오.
// void onetoten(int n);
// 
// int main() {
//     int n;
//     scanf("%d", &n);
//     if (n > 50) {
//         printf("50 이하의 숫자를 입력하세요.\n");
//     } else if (n < 0) {
//         printf("1 이상의 숫자를 입력하세요.\n");
//     } if (n == 0) {
//         printf("0은 안됨 ㅋ\n");
//     } else if (n >= 0 && n <= 50) {
//         onetoten(n);
//     }
// }
//
// void onetoten(int n) {
//     if (n == 0) {
//         return;
//     }
//     onetoten(n - 1);
//     printf("%d\n", n);
// }

// 3. 12 이하의 자연수 N을 입력받아 재귀함수를 이용하여 N!(팩토리얼)을 구하여 출력하는 프로그램을 작성하시오.
// int fac(int n);
// 
// int main() {
//     int n;
//     scanf("%d", &n);
//     if (n > 12) {
//         printf("50 이하의 숫자를 입력하세요.\n");
//     } else if (n < 0) {
//         printf("1 이상의 숫자를 입력하세요.\n");
//     } if (n == 0) {
//         printf("0은 안됨 ㅋ\n");
//     } else if (n >= 0 && n <= 12) {
//         printf("%d!=%d\n", n, fac(n));
//     }
// }
// 
// int fac(int n) {
//     if (n == 1) {
//         return 1;
//     }
//     return n * fac(n - 1);
// }

// 4. 9자리 이하의 자연수 N을 입력받아 재귀함수를 이용하여 각 자리 숫자들의 합을 출력하는 프로그램을 작성하시오.
