#include <stdio.h>
#include <stdlib.h>

int main() {
	int limit,sum=0;

	printf("\nEnter a Limit:");
	scanf("%d",&limit);
    for (int i = 1; i <=limit; i+=2){
        sum=sum+i;
    }
    printf("\nThe Sum of %d odd Numbers is :%d\n",limit,sum);
    return 0;
}