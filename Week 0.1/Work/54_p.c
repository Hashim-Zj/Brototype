#include <stdio.h>
int main(){
    int n=5;
    for(int i=n;i>1;i--){
        for(int j=n;j>=i;j--){
            printf("* ");
        }for(int k=1;k<(2*i)-1;k++){
            printf("  ");
        }for(int j=n;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    } 
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("* ");
        }for(int k=1;k<(2*i)-1;k++){
            printf("  ");
        }for(int j=n;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }   
}