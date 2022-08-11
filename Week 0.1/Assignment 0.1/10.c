#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr1[10],arr2[10],temp[10],limit,i;

	printf("\nEnter a Limit:");
	scanf("%d",&limit);
    printf("Enter the values of Array 1\n");
    for (i = 0; i <limit; i++){
       scanf("%d",&arr1[i]);
    }
    printf("Enter the values of Array 2\n");
    for (i = 0; i <limit; i++){
       scanf("%d",&arr2[i]);
    }
    printf("\nArrays after swapping:-");
    for (i = 0; i <limit; i++){
       temp[i]=arr1[i];
       arr1[i]=arr2[i];
       arr2[i]=temp[i];
    }
    printf("\nArray1:");
    for (i = 0; i <limit; i++){
       printf("%d ",arr1[i]); 
    }
    printf("\nArray2:");
    for (i = 0; i <limit; i++){
       printf("%d ",arr2[i]); 
    }
    printf("\n");
    return 0;
}