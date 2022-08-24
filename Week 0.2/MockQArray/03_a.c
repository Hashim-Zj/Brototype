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
    int c=0,temp;
    for(int i=0;i<limit;i++){
        if(arr[i]==1){
            c++;
        }
        for(int j=0;j<limit;j++){
            if(arr[i]<arr[j]&&i!=j){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("count of'1' is %d",c);
    printf("Array is ");
    for(int i=0;i<limit;i++)
        printf("%d ",arr[i]);
    }
    