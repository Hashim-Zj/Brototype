#include <stdio.h>
#include <stdlib.h>

float incomTax(double income){ 
    double tax;
    if(income<=250000){
        tax=0;
    }else if(income>250000&&income<=500000){
        tax=5;
    }else if(income>500000&&income<=1000000){
        tax=20;
    }else if(income>1000000&&income<=50000000){
        tax=30;
    }else{
        printf("Enter your Anual incom corectley");
    }
    double ict=((tax/100)*income);
    return ict;
}
int main() {
	double inctax,ainc;
    printf("Enter your Anual incom:");
    scanf("%lf",&ainc);
    inctax=incomTax(ainc);
    printf("Income Tax amout=%lf\n",inctax);
   
}