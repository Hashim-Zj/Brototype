#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=1;j<=2;j++){
            for(int k=0;k<=i;k++){
                printf("* ");
            }printf("\n");
        }for(int j=1;j<=n+(n*i);j++){
            printf("* ");
        }printf("\n");
    }
}