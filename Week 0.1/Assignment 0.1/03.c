#include <stdio.h>
#include <stdlib.h>

int main() {
	int P;
    float SI=0,N,R;
	printf("\nEnter Principal amount:");
	scanf("%d",&P);
    printf("Enter Interest rate:");
	scanf("%f",&R);
    printf("Enter Number of years:");
	scanf("%f",&N);
    printf("\nPrincipal amount:%d\nInterest rate:%f\nNumber of years:%f\n",P,R,N);
    SI=(P*R*N)/100;
    printf("Simple Interest is:%f",SI);
    return 0;
}