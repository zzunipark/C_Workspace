#include <stdio.h>
#pragma warning(disable:4996)

struct student {
    int num;
    char name[10];
    double grade;
};

typedef struct {
    int num;
    char name[10];
    double grade;
}STUDENT;

int main() {
    struct student s = { 1310, "박민준", 99.9};
    struct student* p = &s;
    printf("%d %s %lf\n", (*p).num, (*p).name, (*p).grade);
    printf("%d %s %lf\n", p->num, p->name, p->grade);
}