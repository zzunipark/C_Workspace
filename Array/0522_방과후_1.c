#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int arr[7];
    int i, max = 0, min = 500, sum = 0, avg;
    for(i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < 7; i++) {
        if(arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }

    for(i = 0; i < 7; i++) {
        sum = sum + arr[i];
    }

    sum = sum - min - max;
    avg = sum / 5;

    printf("평균 : %d점", avg);
}