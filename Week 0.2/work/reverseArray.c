#include<stdio.h>
int main(){
    int limit,temp;
    printf("Enter limit:");
    scanf("%d",&limit);
    int arr[limit];
    printf("enter array");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=(limit/2)-1;i++){
        temp=arr[i];
        arr[i]=arr[limit-i-1];
        arr[limit-i-1]=temp;
    }
 printf("Array is ");
    for(int i=0;i<limit;i++)
        printf("%d ",arr[i]);
}