#include <stdio.h>
#include <stdlib.h>

int main() {
    int limit,i,j,s;
	printf("Enter a limit:");
    scanf("%d",&limit);
    for(i=0;i<=limit;i++){
        for(s=1;s<=limit-i;s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("1\n");
    }
    return 0;
}