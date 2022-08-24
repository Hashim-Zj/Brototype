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
    int os=0,es=0,oc=0,ec=0;
    for(int i=0;i<limit;i++){
        if(arr[i]%2==0){
            es+=arr[i];
            ec++;
        }else{
            os+=arr[i];
            oc++;
        }
    }printf("odd numbers %d count & summ is %d\neven number %d count sunm is %d ",oc,os,ec,es);
    }