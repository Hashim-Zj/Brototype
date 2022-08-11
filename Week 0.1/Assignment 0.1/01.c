#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
	char name[25],grade;
    printf("\nEnter Your Name :");
	fgets(name,25,stdin);
    name[strlen(name)-1]='\0';
    printf("\nEnter Your Grade :");
	scanf("%c",&grade);
	printf("\nHello  %s\nYour grade is :%c\n",name,grade);
    
    return 0;
}