#include<stdio.h>
int main(){
    int n=6;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }for(int k=1;k<=n;k++){
            printf("* ");
        }printf("\n");
    }
}