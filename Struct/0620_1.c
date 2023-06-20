#include <stdio.h>
#include <string.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main() {
    struct student stu = {1310, "박민준", 99.9};
    struct student stu2;

    stu2.number = 1302;
    strcpy(stu2.name, "박민준");
    stu2.grade = 99.9;

    printf("학번: %d\n", stu.number);
    printf("이름: %s\n", stu.name);
    printf("성적: %f\n", stu.grade);

    scanf("%d", &stu.number);
    scanf("%9s", stu.name);
    scanf("%lf", &stu.grade);

    printf("학번: %d\n", stu.number);
    printf("이름: %s\n", stu.name);
    printf("성적: %.1lf\n", stu.grade);

    return 0;
}
