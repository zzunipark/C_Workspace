#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int m, n, answer = 0;
    
    scanf("%d", &m);
    scanf("%d", &n);

    if(m && n) {
        if(m > n) {
            answer = m/n;
            if(m % n) answer++;
        } else {
            answer = n/m;
            if(n % m) answer++;
        }
    }

    printf("%d\n", answer);

    return 0;
}