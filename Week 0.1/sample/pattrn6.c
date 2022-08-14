#include <stdio.h>

int main()
{
    int n = 9,m=1;
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {

            printf(" ");
            // if(j==1||i==n||j==i)
            //     printf("+");
            // else
            //     printf(" ");
        }
        for (int k = 1; k <= m; k++)
        { if(k==1||i==1||k==m)
                printf("*");
            else
                printf(" ");
            //printf("*");
        }
        printf("\n");
        m++;
    }

    //         }else{
    //         printf(" ");for
    //          }
    //     }
    //     printf("\n");
    // }

    return 0;
}
// int main()
// {
//     int n,m=1;
//     printf("Enter the number of rows");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--)
//     {
//         for(int j=1;j<i;j++)
//         {
//           printf(" ");
//         }
//         for(int k=1;k<=m;k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         m++;
//     }
//     return 0;
// }