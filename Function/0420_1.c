#include <stdio.h>

// void printrec(int n);
//
// int main() {
//     printrec(10);
// }
//
// void printrec(int n) {
//     if (n == 0) {
//         return;
//     }
//     printf("recoursive ");
//     printrec(n - 1);
// }

// void printnum(int n);
//
// int main() {
//     printnum(10);
// }
//
// void printnum(int n) {
//     if (n == 0) {
//         return;
//     }
//     printnum(n - 1);
//     printf("%d ", n);
// }

// int fac(int n);
//
// int main() {
//     printf("10!=%d\n", fac(10));
// }
//
// int fac(int n) {
//     if (n == 1) {
//         return 1;
//     }
//     return n * fac(n-1);
// }

int hap(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d ", hap(n));
}

int hap(int n) {
    if(n == 0) {
        return 0;
    }
    return (n % 10) * hap(n / 10);
}