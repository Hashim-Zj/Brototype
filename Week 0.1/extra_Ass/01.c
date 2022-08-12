#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void print(char *name,int num,int c){
    printf("\"%s\"\n",name);
    c++;
    if(c<num)
        print(name,num,c);
}
int main() {
    char name[25];
    int num;
	printf("Enter your name:");
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';
    printf("How many Times Print your name?");
    scanf("%d",&num);
    print(name,num,0);
    return 0;
}