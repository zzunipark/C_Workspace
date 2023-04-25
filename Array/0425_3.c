#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int arr[5] = { 0 };
    int i;
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}