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
    printf("array is");
    for(int i=0;i<limit;i++){
        if(arr[i]%3==0){
            arr[i]=10;
        }
        printf("%d ",arr[i]);
    }
}