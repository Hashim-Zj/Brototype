#include <stdio.h>
int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            if (i + j == n + 1 || j - i == n - 1)
            {
                printf("%2d", i);
            }
            else
            {
                printf(" ");
            }
        }printf("\n");
    }
}
