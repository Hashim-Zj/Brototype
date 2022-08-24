#include<stdio.h>
int main(){
    char name[100];
    printf("Enter a name");
    gets(name);
    int l=strlen(name);
    for(int i=0;i<l;i++){
        for(int j=l;j>i;j--){
            for(int k=i;k<j;k++){
                printf("%c",name[k]);
            }printf("  ");
        }printf("\n");
    }
}

