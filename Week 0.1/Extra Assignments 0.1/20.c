#include <stdio.h>
#include <string.h>

int main(){
    char name[50];
    int i;
    printf("Enter your Name: ");
    gets(name);
    for(i=0;name[i]!='\0';i++){
        if(name[i]>='a'&&name[i]<='z'){
            name[i]=name[i]-32;
        }
    }
    printf("you enterd %s\n ",name);
  	
  	return 0;
}