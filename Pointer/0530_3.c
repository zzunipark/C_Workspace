#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    char str1[] = "My String";
    char* str2 = "Your String";
    printf("%s %s\n", str1, str2);
    str2 = "Our String";
    printf("%s\n", str2);
    str1[0]= 'X';
    printf("%s\n", str1);

    char str3[][10] = {
        "바나나",
        "딸기",
        "사과",
        "블루베리",
        "토마토 주스"
    };

    char * str4[100] = {
        "바나나",
        "딸기",
        "사과",
        "블루베리",
        "토마토 주스"
    };

    for(int i = 0; i < 5; i++) {
        puts(str4[i]);
    }

    return 0;
}