#include <stdio.h>
#pragma warning(disable:4996)

struct complex {
    double real;
    double imag;
};

struct pint {
    int x;
    int y;
}POINT;

typedef struct food {
    char name[30];
    int calories;
}FOOD;

struct complex add(struct complex c1, struct complex c2);

int calc_calories(FOOD farr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += farr[i].calories;
    }

    return sum;
}

int main() {
    // struct complex c1 = { 1.0, 2.0 };
    // struct complex c2 = { 2.0, 3.0 };
    // struct complex re;
    // re = add(c1, c2);
    // printf("%.1lf + %.1lfi\n", re.real, re.imag);

    // 두 점의 좌표가 일치하면 1, 일치하지 않으면 0을 반환하는 함수를 이용하여
    // (1,2)!=(3,3)
    // (1,1)==(1,1)
    //
    // struct pint p1 = { 1, 2 };
    // struct pint p2 = { 3, 3 };
    //
    // if (p1.x == p2.x && p1.y == p2.y) {
    //     printf("(%d, %d) == (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
    // }
    // else {
    //     printf("(%d, %d) != (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
    // }

    // 각각의 음식에 이름, 칼로리 정보를 저장하는 구조체
    // 하루동안 먹은 음식들의 칼로리 계산

    FOOD farr[3] = {
        {"피자", 1000},
        {"치킨", 900},
        {"햄버거", 1200}
    };

    int total = calc_calories(farr, 3);

    return 0;
}

struct complex add(struct complex c1, struct complex c2) {
    struct complex re;
    re.real = c1.real + c2.real;
    re.imag = c1.imag + c2.imag;

    return re;
}