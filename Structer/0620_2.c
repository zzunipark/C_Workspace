#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point p1;
    struct point p2;
};

int main() {
    struct rect r;
    printf("좌 상단의 x, y 좌표를 입력하세요 >> ");
    scanf("%d %d", &r.p1.x, &r.p1.y);
    printf("우 하단의 x, y 좌표를 입력하세요 >> ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    int width = r.p2.x - r.p1.x;
    int height = r.p2.y - r.p1.y;

    printf("넓이는 %d, 둘레는 %d입니다.\n", width * height, 2 * (width + height));

    return 0;
}