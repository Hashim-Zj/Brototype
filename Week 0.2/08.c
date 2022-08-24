//Armstrong Number :
#include<stdio.h>
int main(){
    int num,n,sum=0;
    printf("Enter a Number:");
    scanf("%d",&num);
    int temp=num;
    while(num>0){
        n=num%10;
        num/=10;
        n=n*n*n;
        sum=sum+n;
    }
    if(temp==sum){
        printf("Armstrong Number");
    }else{
        printf("Not Armstrong Number!");        
    }
    
}