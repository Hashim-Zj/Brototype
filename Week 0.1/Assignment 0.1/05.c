#include <stdio.h>
#include <stdlib.h>

int main() {
	float mark;

	printf("\nEnter your Mark:");
	scanf("%f",&mark);
    printf("Your Grade is:");
    if (mark>=90){
        printf("A\n");
    }else if(mark>=80&&mark<=89){
        printf("B\n");
    }else if(mark>=70&&mark<=79){
        printf("C\n");
    }else if(mark>=60&&mark<=69){
        printf("D\n");
    }else if(mark>=50&&mark<=59){
        printf("E\n");
    }else if(mark<50){
        printf("Failed\n");
    }else
    return 0;
}