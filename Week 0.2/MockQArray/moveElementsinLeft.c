#include<stdio.h>


int main(){
    int limit;
    printf("Enter limit:");
    scanf("%d",&limit);
    int a[limit];
    printf("enter array");
    for(int i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    int k=0;
    for(int i=0;i<limit;i++){
        if(a[i]!=0){
            a[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<limit;i++){
        printf("%d ",a[i]);
    }
}