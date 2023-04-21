#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int a, b;
    char symbol;

    printf("Input Number >> ");
    scanf("%d%c%d", &a, &symbol, &b);

    /*
    if (symbol == '+') {
        printf("%d + %d = %d", a, b, a+b);
    } else if (symbol == '-') {
        printf("%d - %d = %d", a, b, a-b);
    } else if (symbol == '/') {
        printf("%d / %d = %d", a, b, a/b);
    } else if (symbol == '*') {
        printf("%d x %d = %d", a, b, a*b);
    } else if (symbol =='%') {
        printf("%d % %d = %d", a, b, a&b);
    } else {
        printf("올바른 기호를 입력하세요.");
    }
    */

    switch(symbol) {
        case '+':
        printf("%d + %d = %d", a, b, a+b);
        break;

        case '-':
        printf("%d - %d = %d", a, b, a-b);
        break;

        case '/':
        printf("%d / %d = %d", a, b, a/b);
        break;

        case '*':
        printf("%d x %d = %d", a, b, a*b);
        break;

        case '%':
        printf("%d %% %d = %d", a, b, a%b);
        break;

        default:
        printf("올바른 기호를 입력하세요.");
        break;
    }
}