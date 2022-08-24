#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        int l=i;
        for(int k=1;k<2*i;k++){
            (k<(2*i)/2)?printf("%d ",l++):printf("%d ",l--);
        }printf("\n");
    }
}