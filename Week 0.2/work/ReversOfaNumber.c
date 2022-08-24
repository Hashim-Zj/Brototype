#include<stdio.h>
int main(){
    int num,rev=0,n;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("The Reverse of %d is :",num);
    while(num>0){
        n=num%10;
        rev=rev*10+n;
        num/=10;
    }
    printf("%d",rev);
}