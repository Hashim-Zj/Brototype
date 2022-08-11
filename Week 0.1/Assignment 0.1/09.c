#include <stdio.h>
#include <stdlib.h>

int main() {
	int limit,i,j;

	printf("\nEnter a Limit:");
	scanf("%d",&limit);
    for (i = 1; i <=limit; i++){
       for(j=1;j<=i;j++){
            printf("%d  ",j);
       }
       printf("\n");
    }
    
    return 0;
}