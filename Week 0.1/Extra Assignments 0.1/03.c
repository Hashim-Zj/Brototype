#include <stdio.h>
#include <stdlib.h>
int strlen(char *name){
    int i;
    for(i=0;name[i]!='\0';++i){}
    return i;
}

int main() {
    char fname[100],sname[100];

    int i=0,flag=0;
	printf("Enter First Name:");
    gets(fname);
    printf("Enter Second Name:");
    gets(sname);
    printf("your enterd names are:-\nName1 :%s\nName2 :%s\n",fname,sname);
    if(strlen(fname)==strlen(sname)){
        if(strlen(fname)==0){
            printf("your not enterd strings\n");
        }else{
            for(i=0;fname[i]!='\0';i++){ 
                if(fname[i]!=sname[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("the strings are equal\n");
            }else{
                printf("The strings are Not equal\n");
            }   
        }
    }else{
        printf("The strings are Not equal\n");
    }

    return 0;
}