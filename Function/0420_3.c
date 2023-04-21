#include <stdio.h>
#pragma warning(disable:4996)

double get_avg(int brr[], int n);
void print_arr(int *brr, int n);
void modify_arr(int arr[], int n);

int main() {
    int arr[5]={ 1, 2, 3, 4, 5 };
    double avg;

    avg = get_avg(arr, 5);
    printf("%.2f\n", avg);

    print_arr(arr, 5);
    printf("\n");
    modify_arr(arr, 5); // 배열의 모든 요소를 1씩 증가해주는 함수
    print_arr(arr, 5);

    return 0;
}

double get_avg(int brr[], int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += brr[i];
    }
    return (double)sum / n;
}

void print_arr(int *brr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", brr[i]);
    }
}

void modify_arr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        arr[i]++;
    }
}