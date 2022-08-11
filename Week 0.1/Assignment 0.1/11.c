#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[10],limit,i,flag=0;

	printf("\nEnter a Limit:");
	scanf("%d",&limit);
    printf("Enter the values of Array\n");
    for (i = 0; i <limit; i++){
       scanf("%d",&arr[i]);
    }
    for (i = 0; i <limit; i++){
       if (arr[i]%2==0){
        flag+=1;
       }  
    }
    printf("Number of even numbers in the given array is :%d\n",flag);
    return 0;
}