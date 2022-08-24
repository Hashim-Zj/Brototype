#include<stdio.h>

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("X\n");
        }for(int k=1;k<=i*3;k++){
            printf("X ");
        }
        printf("\n");
    }
}