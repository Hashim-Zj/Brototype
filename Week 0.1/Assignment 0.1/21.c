#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr1[50],arr2[50],limit,i,j,p=0;
    printf("Enter The array limit:");
    scanf("%d",&limit);
    printf("Enter The array values:\n");
    for (i=0;i<limit;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Multiplide Array is: ");
    for(i=0;i<limit-1;i++){
        arr2[i]=arr1[i]*arr1[i+1];
        printf("%d  ",arr2[i]);
    }
        printf("\n");
    return 0;
}