#include<stdio.h>
int main(){
    int n=5,l=0;
    for(int i=1;i<=n;i++){
        if(i%2==1)
            l=5;
        else
            l=3;
        for(int j=1;j<=l;j++){
            printf("* ");
        }printf("\n");
        if(i!=n){
            for(int j=1;j<=2;j++){
                printf("*\n");
            }
        }    
    }
}
