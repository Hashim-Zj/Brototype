#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
	int arr1[10][10],arr2[10][10],sum[10][10],limit,i,j;
    printf("\nEnter a Limit:");
	scanf("%d",&limit);
    printf("Enter the values of Array 1\n");
    for (i = 0; i <limit; i++){
       for(j=0;j<limit;j++){
            scanf("%d",&arr1[i][j]);
       }
    }
    printf("Enter the values of Array 2\n");
    for (i = 0; i <limit; i++){
       for(j=0;j<limit;j++){
            scanf("%d",&arr2[i][j]);
       }
    }
	for (i = 0; i <limit; i++){
       for(j=0;j<limit;j++){
            sum[i][j]=(arr1[i][j]+arr2[i][j]);
       }
    }
    printf("\nSum of 2 arrays is:\n");
    for (i = 0; i <limit; i++){
       for(j=0;j<limit;j++){
            printf("%d  ",sum[i][j]);
       }
       printf("\n");
    }
    
    return 0;
}