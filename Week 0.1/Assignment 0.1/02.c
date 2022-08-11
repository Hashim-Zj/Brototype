#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1;
    float sum=0,num2;
	printf("Enter a integer Number:");
	scanf("%d",&num1);
    printf("Enter a Decimal Number:");
	scanf("%f",&num2);
    
    printf("\nFirst Number is:%d\nSecond Number is:%f\n",num1,num2);
    sum=num1+num2;
    printf("Sum is:%f",sum);
    return 0;
}