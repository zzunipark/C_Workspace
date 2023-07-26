#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int arr[4] = { 1, 4, 2, 3 };
    int temp1, temp2;

    temp1 = arr[3]; // Temp = 3, arr[3] = none;
    temp2 = arr[0];

    arr[0] = temp1;
    arr[3] = temp2;

    temp1 = arr[2];
    temp2 = arr[1];

    arr[1] = temp1;
    arr[2] = temp2;

    for(int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
}