#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        if(i%2==1){
           for(int j=1;j<=5;j++){
                printf("* ");
            } 
        }else{
            for(int j=1;j<=3;j++){
                printf("* ");
            }
        }printf("\n");
        if(i!=n){
        for(int k=1;k<=2;k++){
            printf("*\n");
        }
        }
        
    }
}