#include<stdio.h>

int isPrime(int n){
    int flag=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            flag++;
        }
    }if(flag==2)
        return 1;
    else
        return 0;

}

int main(){
    int limit;
    printf("Enter limit:");
    scanf("%d",&limit);
    int arr[limit];
    printf("enter array");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<limit;i++){
        if(isPrime(arr[i])){
            for(int j=i;j<limit-1;j++){
                arr[j]=arr[j+1];
            }
            limit--;
            i--;
        }
    }
    int sum=0;
    printf("Array is:");
    for(int i=0;i<limit;i++){
        sum+=arr[i];
        printf("%d ",arr[i]);
    }
    printf("sum is:%d",sum);

}

