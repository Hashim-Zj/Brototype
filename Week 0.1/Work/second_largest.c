#include<stdio.h>
#include<limits.h>

int main(){
    int l1,l2,limit;
    l1=INT_MIN;
    printf("Enter a limit:");
    scanf("%d",&limit);
    int arr[limit];
    printf("Enter array elaments:");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<limit;i++){
        if(arr[i]>l1){
            l2=l1;
            l1=arr[i];
        }else if(l1>arr[i]&&arr[i]>l2){
            l2=arr[i];

        }
    }printf("l1: %d  l2: %d ",l1,l2);
}