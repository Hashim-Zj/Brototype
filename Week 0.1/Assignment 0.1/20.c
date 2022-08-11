#include <stdio.h>
#include <stdlib.h>

int main() {
	int limit,i,j,p=0;
    printf("Enter a limit:");
    scanf("%d",&limit);
    for (i=0;i<limit+1;i++){
        for(j=1;j<=i;j++){
            p+=1;
            printf("%d  ",p);
        }
        printf("\n");
    }
    return 0;
}