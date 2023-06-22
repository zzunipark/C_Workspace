#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

struct student {
    int num;
    char name[10];
    double grade;
};

int equal(struct student * aa, struct student * bb);
struct student create();

int main() {
    // 구조체와 함수
    // struct student a = { 1, "hong", 3.8 };
    // struct student b = { 2, "kim", 4.3 };
    //   
    // if (equal(&a, &b) == 1) {
    //     printf("같은 학생입니다.\n");
    // }
    // else {
    //     printf("다른 학생입니다.\n");
    // }

    // 구조체를 함수의 반환값으로 넘기기
    struct student s;
    s = create();
    printf("%d %s %.lf\n", s.num, s.name, s.grade);

    return 0;
}

struct student create() {
    struct student s;
    s.num = 1310;
    strcpy(s.name, "박민준");
    s.grade = 4.5;

    return s;
}

int equal(struct student * aa, struct student * bb) {
    if (aa->num == bb->num) {
        return 1;
    }

    return 0;
}