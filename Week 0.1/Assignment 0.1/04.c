#include <stdio.h>
#include <stdlib.h>

int main() {
	float mark;
	printf("\nEnter your Mark:");
	scanf("%f",&mark);
    if (mark>=50){
        printf("Passed\n");
    }else{
        printf("Failed\n");
    }
    return 0;
}