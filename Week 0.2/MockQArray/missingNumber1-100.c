#include<stdio.h>

int main(){
    int limit;
    printf("Enter limit:");
    scanf("%d",&limit);
    int arr[limit];
    printf("enter array 1 to limit in order");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1,j=0;i<=20;){
        if(arr[j]==i){
           i++;
           j++;
        }else{
            printf("%d ",i);
            i++;

        }
    }
}
