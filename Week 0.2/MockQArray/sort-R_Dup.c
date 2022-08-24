
#include <stdio.h>

int main()
{
    int limit, temp;
    printf("Enter limit:");
    scanf("%d", &limit);
    int arr[limit];
    printf("enter array");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            if (arr[i] > arr[j] && i != j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    } for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
             if (arr[i] == arr[j] && i != j)
            {
                for (int k = j; k < limit - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                limit--;
                i--;
            }
        }
    }
    printf("Final: ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", arr[i]);
    }
}