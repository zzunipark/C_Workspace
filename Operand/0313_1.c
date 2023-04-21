#include <stdio.h>
#pragma warning(disable:4996)
// #define PI 3.14

int main() {
    // const double PI = 3.14;

    // 원의 넓이 구하기
    /* double r, area;
    printf("원의 반지름을 입력해 주세요.\n");
    scanf("%lf", &r);
    area = r * r * PI;
    printf("원의 넓이: %.2f\n", area);
    */

    // swap 세 수 교환
    /* int a, b, c, temp;
    printf("a, b, c의 값을 입력해주세요.\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Before > %d, %d, %d\n", a, b, c);

    temp = a;
    a = b;
    b = c;
    c = temp;

    printf("After > %d %d %d\n", a, b, c);
    */

    // 아스키코드 ASCII
    char ch = 'A';
    printf("%d, %c\n", ch, ch);
    printf("%d, %c\n", ch + 1, ch + 1);
    printf("%d, %c\n", ch + 2, ch + 2);
    printf("%d, %c\n", ch + 3, ch + 3);
    printf("%d, %c\n", ch + 4, ch + 4);
    printf("%d, %c\n\n", ch + 5, ch + 5);

    for (int i = 0; i < 6; i++) {
        printf("%d, %c\n", ch+i, ch+i);
    }

    //printf("\",\', %%\n");

    return 0;
}