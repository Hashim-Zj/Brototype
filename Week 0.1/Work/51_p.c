#include <stdio.h>
// int main(){
//     int p;
//     int n=4,k=0;
//     for(int i=n;i>=-n;i--){
//         if (i>=1)
//            k++;
//         else if(i<-1){
//             k--;
//         }

//         if(i==0){
//             continue;
//         }

//         (i%2==0)?p=((6-abs(i))-1):(p=(6-abs(i)));

//         for(int j=1;j<=p;j++){
//             (j%2!=0)?printf("%d ",k):printf("* ");

//         }

//         printf("\n");
//     }

// }

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < (2 * i); j++)
        {
            (j % 2 != 0) ? printf("%d ", i) : printf("* ");
        }
        printf("\n");
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < (2 * i); j++)
        {
            (j % 2 != 0) ? printf("%d ", i) : printf("* ");
        }
        printf("\n");
    }
}