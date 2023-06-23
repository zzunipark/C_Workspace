#include <stdio.h>
#pragma warning(disable:4996)

struct complex {
    double real;
    double imag;
};

typedef struct pint {
    int x;
    int y;
} PINT;

typedef struct food {
    char name[30];
    int calories;
} FOOD;

struct complex add(struct complex c1, struct complex c2);

int calc_calories(FOOD farr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += farr[i].calories;
    }

    return sum;
}

int main() {
    FOOD farr[3] = {
        {"피자", 1000},
        {"치킨", 900},
        {"햄버거", 1200}
    };

    int total = calc_calories(farr, 3);
    printf("총 칼로리: %d\n", total);

    return 0;
}

struct complex add(struct complex c1, struct complex c2) {
    struct complex re;
    re.real = c1.real + c2.real;
    re.imag = c1.imag + c2.imag;

    return re;
}
