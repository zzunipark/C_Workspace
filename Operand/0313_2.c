#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    // 1. 숫자 입력받고 출력
    /*
    int a;
    printf("숫자를 입력해주세요.\n");
    scanf("%d", &a);
    printf("%d\n", a);
    */

    // 2. 알파벳 문자 입력받아 출력
    /*
    char alphabet;
    printf("알파벳 하나를 입력하세요.\n");
    scanf("%c", &alphabet);
    printf("%c\n", alphabet);
    */

    // 3. 두 정수를 입력받아 합을 출력
    /*
    int a, b, sum;
    printf("두 정수를 입력하세요.\n");
    scanf("%d%d", &a, &b);
    // sum = a + b;
    printf("두 정수를 더한 답 : %d\n", a+b);
    */

    /*
    sum = 0;
    sum += a;
    sum += b;    
    */

    // printf("sum : %d\n", sum);

    // 4. 태양빛이 몇 초만에 지구에 도달할까?
    /*
    double speed = 300000;
    double dis = 149600000;
    double time;
    time = dis / speed;
    printf("빛의 속도는 %.fkm/s\n", speed);
    printf("태양과 지구와의 거리는 %.fkm\n", dis);
    printf("도달시간은 %f초\n", time);
    */

    // 5. 태양빛이 도달한 초는 몇분 몇초인지 변환하여 보자.
    /*
    int temp = (int)time;
    int m, s;
    m = temp / 60;
    s = temp % 60;
    printf("%d초는 %d분 %d초 입니다.\n", temp, m, s);
    */

   return 0;
}