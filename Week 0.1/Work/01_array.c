#include<stdio.h>
int main(){
    int arr[100],limit,i,j;
    printf("enter a limit:");
    scanf("%d",&limit);
    printf("entre array elamants;");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0,j=limit-1;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    for(i=0;i<limit;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}