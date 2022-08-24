#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            if(i+j==n+1||j-i==n-1){
                printf("*");
            }else if(i+j>n+1&&j-i<n-1){
                printf("_");
            }else{
                printf(" ");
            }
        }printf("\n");
    }
}