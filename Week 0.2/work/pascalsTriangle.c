#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++)
            printf(" ");
            int c=1;
        for(int k=0;k<=i;k++){ 
            printf("%d ",c);
            c=c*(i-k)/(k+1);
        
        }printf("\n");
    }
}