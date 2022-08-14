#include <stdio.h>
#include <stdlib.h>

int strlen(char *name){
    int i=0;
    for(i=0;name[i]!='\0';++i){}
    return i;   
}
char strcat(char *name1,char *name2){
    int i,l1,l2;
    l1=strlen(name1);
    l2=strlen(name2);
    printf("length is :%d\n",l2);
    for(i=0;i<=l2+1;i++){
        name1[l1+1]=name2[i];
    }
    return name1;
}
int main() {
    char name1[100],name2[100];
    int i,l;
    printf("Enter First string : ");
    gets(name1);
    printf("Enter Second string : ");
    gets(name2);
    l=strlen(name1);
    //printf("length is :%d\n",l);
    printf("length of 1 :%d\n",strlen(name1));
    printf("length of 2 :%d\n",strlen(name2));
    strcat(name1,name2);
    printf("concatination of 2 :%s\n",strcat(name1,name2));
    return 0;
}