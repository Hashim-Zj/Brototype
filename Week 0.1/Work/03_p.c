#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2;j++){
            for(int k=1;k<=i*3;k++){
                printf("* ");
            }printf("\n");
        }if(i!=n){
            for(int k=1;k<=i;k++){
                printf("*\n");
            }
        }
    }
}