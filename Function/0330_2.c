#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)
void print_stars();
int max(int x, int y);

int main() {
    // int com, user, cnt = 0;
    // srand((unsigned)time(NULL));
    // com = rand() % 100 + 1;

    // do {
    //     printf("1~100까지 수 중 정답을 추측하여 보시오: ");
    //     scanf("%d", &user);

    //     if (com > user) {
    //         printf("제시한 수가 정답보다 낮습니다. up!! \n");
    //         cnt++;
    //     } else if (com < user) {
    //         printf("제시한 수가 정답보다 큽니다. down! \n");
    //         cnt++;
    //     }
    // }

    print_stars();
    printf("Hello world\n");
    print_stars();
    int x=max(-1, 100);
    printf("큰 수는 %d\n", x);
    printf("큰 수는 %d\n", max(100, 1000000));
}

int max(int x, int y) {
    if(x>y) {
        return x;
    } else {
        return y;
    }
}

void print_stars() {
    for(int i = 0; i < 30; i++) {
        printf("*");
    }
    printf("\n");
}