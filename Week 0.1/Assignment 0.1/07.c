#include <stdio.h>
#include <stdlib.h>

int main() {
	int num,count,mul=0;

	printf("\nEnter a Number:");
	scanf("%d",&num);
    printf("Enter Number of Lines you want:");
    scanf("%d",&count);
    printf("Multiplication Table of %d up to %d\n",num,count);
    for (int i = 1; i <= count; i++){
        printf("%d x %d = %d\n",i,num,mul=(i*num));
    }
    return 0;
}