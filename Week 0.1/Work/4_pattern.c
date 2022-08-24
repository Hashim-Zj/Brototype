#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 != 0)
        {
            for (int l = 1; l <= 5; l++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= 3; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        if (i == 5)
        {
            break;
        }
        for (int k = 1; k <= 2; k++)
        {
            printf("*");
            if (k == 2)
            {
                break;
            }
            else
            {
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}