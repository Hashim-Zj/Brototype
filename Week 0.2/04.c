#include<stdio.h>
int main(){
    int limit;
    printf("Enter a limit:");
    scanf("%d",&limit);
    int arr[limit];
    printf("Enter array elamends:");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }for(int i=0;i<limit-1;i++){
        for(int j=i+1;j<limit;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<limit-1;k++){
                    arr[k]=arr[k+1];
                }
                limit--;
                j--;
            }
        }
    }printf("arrayis\n");
    for(int i=0;i<limit;i++){
        printf("%d  ",arr[i]);
    }
}