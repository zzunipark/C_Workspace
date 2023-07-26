#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    float r = 3.141592;
    float a, size;
    printf("원의 반지름을 입력해 주세요.");
    scanf("%f", &a);
    size = r * (a * a);
    printf("%lf", size);
}