#include <stdio.h>
#pragma warning(disable:4996)

struct student {
    int num;
    char name[10];
    double grade;
};

int main() {
    struct student s[2];
    
    for (int i = 0; i < 2; i++) {
        printf("학번 입력 >> ");
        scanf("%d", &s[i].num);
        printf("이름 입력 >> ");
        scanf("%s", s[i].name);
        printf("성적 입력 >> ");
        scanf("%lf", &s[i].grade);
    }

    for (int i = 0; i < 2; i++) {
        printf("%d %s %.lf\n", s[i].num, s[i].name, s[i].grade);
    }

    return 0;
}