#include <stdio.h>
#include <stdlib.h>
int getArray(int *Arr,int limit){ 
    printf("Enter %d values to Array:\n",limit);
    for(int i=0;i<limit;i++){
            scanf("%d",&Arr[i]);
    }
}
int displayArray(int *Arr,int limit){
    printf("The Array is:\n");
    for(int i=0;i<limit;i++){
            printf("%d ",Arr[i]);
    }
}
int main() {
	int Arr[15],limit;
    printf("\nEnter The Limit:");
	scanf("%d",&limit);
    getArray(Arr,limit);
    displayArray(Arr,limit);
    printf("\n\n");
    return 0;
}