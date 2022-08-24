#include<stdio.h>
int main(){
    int n=5;
    for(int i=n;i>0;i--){
        for(int j=1;j>=0;j--){
            for(int k=1;k<=i+j;k++){
                printf("X ");
            }
        printf("\n");
        }if(i==1)
            break;
        for(int l=1;l<=3;l++){
                printf("X \n");
            }        
    }
}