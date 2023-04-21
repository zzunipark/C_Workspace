#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    /*
    int age, kor, eng, math;
    char grade(A,B,C,D,E), gender(M,F);

    1. if(age==17 && gender=='M')
    2. if(grade=='A' || grade=='B' || grade='C')
    3. if(kor>=90 && eng>=80)
    4. if(kor>=70 && math>=70 || eng>=100)
    5. if(age>=17 || eng>=85)
    6. if(age>=17 && age<19)
    7. if(math>=70 && grade!='C')
    8. if(math%3==0 || math%4==0)
    9. if(age!=17 && age!=34)
    10. if((age==17 || gender=='F') && kor>=90) && ((grade!='A' || eng<=80) && math==100)
    */

    /*
    int a;
    scanf("%d", &a);
    printf("%d\n", a);
    if(a > 10) {
        printf("10보다 큰 수를 입력하셨습니다.\n");
    }
    */

    /*
    int a, b, temp;
    scanf("%d%d", &a, &b);
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("입력받은 두 수 중 큰 수는 %d이고 작은 수는 %d입니다.\n", a, b);
    */

    /* 
    int age;
    scanf("%d", &age);

    if(age>=20) {
        printf("Adult\n");
    } else {
        printf("%d years later\n", 20-age);
    }
    */

    /*
    int score;

    printf("점수를 입력하세요. ");
    scanf("%d", &score);

    if (score>=80) {
        printf("축하합니다. 합격입니다.\n");
    } else {
        printf("불합격입니다.\n");
    }
    */

    /*
    int point;
    printf("점수를 입력하세요. ");
    scanf("%d", &point);

    if (point>=90) {
        printf("A\n");
    } else if (point>=80) {
        printf("B\n");
    } else if (point>=70) {
        printf("C\n");
    } else if (point>=60) {
        printf("D\n");
    } else if (point<=50) {
        printf("F\n");
    }
    */

    /*
    int a;
    scanf("%d", &a);
    switch (a) {
        case 0:
        printf("0개요.\n");
        break;

        case 1:
        printf("1개요.\n");
        break;

        case 2:
        printf("2개요.\n");
        break;

        default:
        printf("많아요.\n");
        break;
    }
    */

    int a;
    scanf("%d", &a);
    switch (a/10) {
        case 10:
        
        case 9:
        printf("A\n");
        break;

        case 8:
        printf("B\n");
        break;

        case 7:
        printf("C\n");
        break;

        case 6:
        printf("D\n");
        break;

        default:
        printf("F\n");
        break;
    }

    return 0;
}