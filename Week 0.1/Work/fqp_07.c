#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<2*n;i++){
        for(int j=1,k=1;j<2*n;j++){
            (i+j>=n+1&&i+j<=(3*n)-1&&i-j<=n-1&&j-i<=n-1)?printf("%d ",k++):printf("  ");
        }printf("\n");
    }
}