#include<stdio.h>
#include<stdlib.h>
int main(){
    int k=7,n;
    n=k-1;
    for(int i=n;i>=-n;i--){
        for(int j=1;j<=abs(i)+1;j++){
            printf("* ");
        }printf("\n");
    }
}