#include<stdio.h>
int main(){
    int n=10;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            (i==n||(i+j)==(n+1)||((j-i)==(n-1)))?printf("*"):printf(" ");
        }printf("\n");
    }
}