#include<stdio.h>
int main(){
    int n=6;
    for(int i=1;i<=6;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }for(int k=1;k<=i;k++){
            printf("%d ",k);
        }printf("\n");
    }
}