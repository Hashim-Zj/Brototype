#include<stdio.h>
int main(){
    int limit;
    printf("enter limit:");
    scanf("%d",&limit);
    int arr[limit];
    printf("entr araaaaay");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<limit;i++){
        if(arr[i]%5==0){
            for(int j=i;j<limit;j++)
                arr[j]=arr[j+1];
            i--;
            limit--;
        }
    }
    printf("array is ");
    for(int i=0;i<limit;i++){
        printf("%d ",arr[i]);
    }
}