#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[10],limit,i,j,flag=0,temp;

	printf("\nEnter a Limit:");
	scanf("%d",&limit);
    printf("Enter the values of Array\n");
    for (i = 0; i <limit; i++){
       scanf("%d",&arr[i]);
    }
    for (i = 0; i <limit; i++){
        for(j=i+1;j<limit;j++){
            if (arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }          
        }
       }
    printf("\nSorted array is :");
    for (i = 0; i <limit; i++){
       printf("%d ",arr[i]);
    }
    return 0;
}