#include<stdio.h>
#include<limits.h>
int main(){
    int limit,c0=INT_MAX,c1;
    printf("Enter limit:");
    scanf("%d",&limit);
    int arr[limit];
    printf("enter array 1 to limit in order");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<limit;i++){
        if(arr[i]<c0){
            c1=c0;
            c0=arr[i];
        }else if(arr[i]>c0&&arr[i]<c)
    }printf("Elament is %d",c0);
}

