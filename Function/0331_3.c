#include <stdio.h>
#pragma warning(disable:4996)
double pyung(int kor, int eng, int math);

int main() {
    int kor, eng, math;
    double avg;

    printf("세 과목의 점수를 입력하시오.");
    scanf("%d%d%d", &kor, &eng, &math);
    avg = pyung(kor, eng, math);

    printf("평균 : %.2f\n", avg);

    return 0;
}

double pyung(int kor, int eng, int math) {
    return (kor + eng + math) / 3.0;
}