#include<stdio.h>
#include<limits.h>
int main(){
    int limit;
    int s1=INT_MAX,s2;
    printf("Enter limit:");
    scanf("%d",&limit);
    int arr[limit];
    printf("enter array");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<limit;i++){
        if(arr[i]<s1){
            s2=s1;
            s1=arr[i];
        }else if(s2>arr[i]&&s1<arr[i]){
            s2=arr[i];
        } 
    } 
    printf(" smalest %d second%d",s1,s2);
    
}
    