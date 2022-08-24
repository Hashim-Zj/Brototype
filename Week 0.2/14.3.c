#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            (i==n||j==1||j==i)?  printf("%d ",j):  printf("  "); 
        }printf("\n");
    }
}