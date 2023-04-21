#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    /*
    printf("%s\n", "My height");
    printf("%d\n", 170);
    printf("%s\n", "My weight");
    printf("%.1f\n", 68.6);
    */

    /*
    printf("%s\n", "수식을 출력하면 계산 결과가 출력됩니다.");
    printf("%s\n", "10 + 5 = 15");
    printf("내 생일은 %d년 %d월 %d일 입니다.\n", 2007, 8, 29);
    */

    /*
    printf("%8s%6s\n", "subject", "score");
    printf("%s\n", "==============");
    printf("%8s%6s\n", "korean", "90");
    printf("%8s%6s\n", "english", "100");
    printf("%8s%6s\n", "computer", "80");
    */

    /*
    int age;
    printf("당신의 나이는 몇 살입니까?");
    scanf("%d", &age);
    printf("%s%d%s\n", "당신의 나이는 ", age, "살이군요.");
    */

    /*
    int a;
    int b;

    printf("두 수를 입력하시오.");
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d * %d = %d\n", a, b, a*b);
    */

    /*
    double height;
    double weight;
    char firstname;

    printf("키를 입력하세요. ");
    scanf("%lf", &height);
    printf("몸무게를 입력하세요. ");
    scanf("%lf", &weight);
    printf("이름을 입력하세요. ");
    getchar();
    scanf("%c", &firstname);

    printf("%s = %.f\n", "키", height);
    printf("%s = %.1f\n", "몸무게", weight);
    printf("%s = %c\n", "이름", firstname);
    */

    /*
    double a,b;

    printf("두 개의 실수를 입력하시오.\n");
    scanf("%lf", &a);
    scanf("%lf", &b);

    printf("x = %.2f\n", a);
    printf("y = %.2f\n", b);
    */

    /*
    int a, b, c;

     scanf("%d%d%d", &a, &b, &c);
     printf("sum: %d\n", a + b + c);
     printf("avg: %.f\n",(a + b + c) / 3.0);

    */

    /*
    int a, b, c, d, e;

    printf("5개의 수를 입력하시오. ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    // printf("%d %d %d %d %d\n", a + 3, b - 3, c * 3, d / 3, e % 3);
    printf("%d %d %d %d %d\n", a+=3, b-=3, c*=3, d/=3, e%=3);

    return 0;
    */

    /*
    int a = 10;
    int b = 10;

    printf("최초값 a = %d, b = %d\n\n", a, b);

    printf("a++ = %d, ++b = %d\n", a++, ++b);
    printf("실행후 a = %d, b = %d\n\n", a, b);

    printf("a-- = %d, --b = %d\n", a--, --b);
    printf("실행후 a = %d, b = %d\n", a, b);
    */
   
    int a, b;
    scanf("%d%d", &a, &b);
    int c = (++a + b--);
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}