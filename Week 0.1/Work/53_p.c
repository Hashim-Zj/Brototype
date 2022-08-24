#include <stdio.h>

#include<stdlib.h>
int main()
{
    int n = 5, p = (n * 2) - 1;

    for (int i = n - 1; i > -(n); i--)
    {
        for (int j = 1; j <= 2 * abs(i); j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= p - (2 * abs(i)); k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}