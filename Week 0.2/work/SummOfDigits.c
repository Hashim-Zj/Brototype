#include<stdio.h>
int main(){
    long long int  num,n,sum=0;
    printf("Enter a Number");
    scanf("%lld",&num);
    while(num>0){
        n=num%10;
        sum=sum+n;
        num=num/10;
    }
    printf("sum is :%lld",sum);
    
}