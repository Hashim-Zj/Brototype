#include<stdio.h>
int main(){
    int n=3;
    for(int i=1,l=2;i<=n;i++){
        for(int j=1;j<=l;j++){
            printf("* ");
        }printf("\n");
        for(int k=1;k<l;k++){
            printf("*\n");
        }l+=2;
    }
}