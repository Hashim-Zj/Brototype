#include<stdio.h>
int main(){
    int n=3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            for(int k=1;k<=n*i;k++){
                printf("* ");
            }
            printf("\n");
        }if(i!=n){
            for(int l=1;l<=n;l++){
                printf("*\n");
            }
        }
    }
}