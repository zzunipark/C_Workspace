#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int arr[5] = { 3, 4, 5, 6, 7 };
    int arr_len = 5;
    int left = 0;
    int right = arr_len - 1;

    while(left < right) {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left += 1;
        right -= 1;
    }
}