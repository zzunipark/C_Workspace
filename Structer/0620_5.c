#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

struct date {
    int year;
    int month;
    int day;
};

struct telephone {
    char name[10];
    char tel[16];
    struct date d;
};

int main() {
    struct telephone t[3];
    for (int i = 0; i < 3; i++) {
        printf("이름을 입력하세요 >> ");
        scanf("%s", t[i].name);
        printf("전화번호를 입력하세요 >> ");
        scanf("%s", t[i].tel);
        printf("날짜를 입력하세요 >> ");
        scanf("%d %d %d", &t[i].d.year, &t[i].d.month, &t[i].d.day);
    }

    return 0;
}