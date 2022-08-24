#include<stdio.h>
#include<string.h>
int main(){
    char n[100]="INDIA";
    int l=strlen(n);
    for(int i=1;i<=l;i++){
        for(int j=0;j<i;j++){
            printf("%c ",n[j]);
        }printf("\n");
    }
}