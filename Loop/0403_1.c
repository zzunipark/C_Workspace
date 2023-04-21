#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int i, j, cnt = 0, y = 0, z = 0;

    scanf("%d", &y);
    if (y % 2 == 1)
    {
        printf("\n");

        for (i = 0; i < y; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");

        for (i = 0; i < y; i++)
        {
            for (j = y; i < j; j--)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");

        for (i = 0; i < y; i++)
        {
            for (j = 0; j < y - i; j++)
            {
                printf(" ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");

        for (i = 0; i < y; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf(" ");
            }
            for (j = y; i < j; j--)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");

        for (i = 0; i < y; i++)
        {
            for (j = 0; j < y - 1 - i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < 2 * i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        printf("홀수를 입력해주세요.");
    }

    return 0;
}