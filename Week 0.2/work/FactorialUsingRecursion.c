#include<stdio.h>

int Factorial(int n){
    int res;
    if(n==0)
        res=1;
    else
        res=n*Factorial(n-1);

    return res;
}
int main(){
    int fact,num;
    printf("Enter a number");
    scanf("%d",&num);
    fact=Factorial(num);
    printf("Factorial of %d is: %d",num,fact);
}
