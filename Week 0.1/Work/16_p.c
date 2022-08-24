#include<stdio.h>
int main(){
    int n=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            for(int k=1;k<=n+(n*i);k++){
                printf("* ");
            }printf("\n");
        }if(i!=n-1){
            for(int j=0;j<n;j++){
                printf("*\n");
            }
        }
    }
}