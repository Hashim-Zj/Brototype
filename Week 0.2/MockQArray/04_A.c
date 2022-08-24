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
    for(int i=0;i<limit-1;i++){
        if(arr[i]%2==0){
            if(i<=limit-3){
                for(int j=i+1;j<limit;j++){
                    arr[j]=arr[j+1];
                }
                limit--;
                for(int j=i+1;j<limit;j++){
                    arr[j]=arr[j+1];
                }
                limit--;
            }else if(i==limit-2){
                for(int j=i+1;j<limit;j++){
                    arr[j]=arr[j+1];
                }
                limit--;
            }
        }
    }
    printf("Array is ");
    for(int i=0;i<limit;i++)
        printf("%d ",arr[i]);
    }
    