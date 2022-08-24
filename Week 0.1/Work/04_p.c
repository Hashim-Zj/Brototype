#include<stdio.h>
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=4*i;j++){
            printf("* ");
        }printf("\n");
        if(i!=n){
            for(int j=1;j<=1+i;j++){
                printf("* ");
            }
        }printf("\n");
    }
}