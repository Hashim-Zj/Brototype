#include<stdio.h>
#include<limits.h>
int main(){
    int limit;
    int s1=INT_MIN,s2;
    printf("Enter limit:");
    scanf("%d",&limit);
    int arr[limit];
    printf("enter array");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    printf("Negative numbers:");
    for(int i=0;i<limit;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }
    }
}