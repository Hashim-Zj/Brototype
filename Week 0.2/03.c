#include<stdio.h>
#include<limits.h>
int main(){
    int limit;
    int l1=INT_MIN,l2;
    printf("Enter arraya limit:");
    scanf("%d",&limit);
    int arr[limit];
    printf("Enter aray elaments:");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }for(int i=0;i<limit;i++){
        if(arr[i]>l1){
            l2=l1;
            l1=arr[i];
        }else if(l1<arr[i]&&arr[i]>l2){
            l2=arr[i];
        }else{  
        }
    }printf("Largest :%d\nSecond Largest:%d",l1,l2);
}