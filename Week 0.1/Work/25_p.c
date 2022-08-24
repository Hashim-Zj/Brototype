#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*i;j++){
            (j%2==1)?printf("%d ",i):printf("* ");   
        }
        printf("\n");
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<2*i;j++){
            (j%2==1)?(printf("%d ",i)):printf("* ");
        }printf("\n");
    }
}