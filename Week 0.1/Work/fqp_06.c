#include<stdio.h>
int main(){
    int n=6;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("  ");
        }for(int k=0;k<=n-i;k++){
            (i%2==0)?printf("* "):printf("$ ");
        }
        printf("\n");
    }
}