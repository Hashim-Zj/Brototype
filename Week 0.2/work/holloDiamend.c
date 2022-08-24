#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("*");
        }for(int s=1;s<=(2*i)-2;s++){
            printf(" ");
        }for(int j=n;j>=i;j--){
            printf("*");
        }printf("\n");
    }for(int i=n;i>=1;i--){
        for(int j=n;j>=i;j--){
            printf("*");
        }
        for(int s=1;s<=(2*i)-2;s++){
            printf(" ");
        }for(int j=n;j>=i;j--){
            printf("*");
        }printf("\n");
        
    }                     
}