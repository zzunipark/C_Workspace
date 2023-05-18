#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    // int i = 10;
    // int* p;
    // p = &i;

    // 포인터는 주소를 담는 자료형이므로, 모든 자료형의 포인터의 크기는 동일하다.
    // printf("%d", sizeof(int *));
    // printf("%d", sizeof(char *));
    // printf("%d", sizeof(double *));

    // printf("포인터를 이용한 간접 참조: %d\n", *p);
    // printf("%p %p %p\n", p, &i, &p);

    // pn이 n을 가리키게 초기화
    // int n = 100;
    // int* pn = NULL;

    // 변수와 포인터를 이용한 값 출력
    // pn = &n;
    // printf("변수 n의 값: %p\n", pn);
    // printf("%d %d\n", n, *pn);

    // int num1 = 10, num2 = 20;
    // int* ptr1=NULL, * ptr2=NULL;
    
    // int arr[3] = { 11, 22, 33};
    // printf("%p %p %p\n", arr, &arr[0], &arr[1]);
    // int* ptr = arr;
    // int i;
    // for(i = 0; i < 3; i++) {
        //printf("%d ", arr[i]);
        // printf("%d ", ptr[i]);
        //printf("%d ", *(arr = i));
        // printf("%d ", *(arr + i));
    // }

    // printf("%d", *ptr);
    // printf("%d ", *ptr); ptr++;
    // printf("%d", *ptr); ptr++;

    // 문제1 : int형 배열 a를 선언하고 1, 2, 3, 4, 5로 초기화한 다음
    // 이 배열을 첫번째 요소를 가리키는 포인터 pa를 선언
    // pa에 저장된 값을 증가시키는 형태로 배열요소에 접근하여 2씩 증가하며 확인
    
    int a[5] = { 1, 2, 3, 4, 5 };
    int* pa = a;

    for(int i = 0; i < 5; i++) {
        *pa += 2;
        pa++;
    }
    
    pa = a;

    for(int i = 0; i < 5; i++) {
        *(pa + i) += 2;
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}