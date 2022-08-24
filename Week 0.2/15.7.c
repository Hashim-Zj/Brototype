#include<stdio.h>
int main(){
    int n=5;
    for(int i=1,x=1;i<=2*n;i++){
        for(int j=1;j<=2*n;j++){
            (j<=x||j>=2*n-x+1)?printf("* "):printf("  ");
        }
        if(i!=n){
            (i<n)?x++:x--;
        }printf("\n");      
    }
}