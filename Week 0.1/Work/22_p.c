#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            printf("  ");
        }for(int k=1;k<=n-i;k++){
            printf("%d ",k+i);
        }printf("\n");
    }
}