#include<stdio.h>

int main(){
    int limit;
    printf("Enter limit:");
    scanf("%d",&limit);
    int arr[limit];
    printf("enter array");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<limit;i++){
        if(arr[i]%4!=0){
           sum=sum+arr[i]; 
        }
    }

    // printf("Array is:");
    // for(int i=0;i<limit;i++){
    //     sum+=arr[i];
    //     printf("%d ",arr[i]);{
    // }
    printf("sum is:%d",sum);

}

