#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            ((i==j)||((j+i)==(n*2)))?printf("* "):printf("  ");
        }
        printf("\n");
    }
}