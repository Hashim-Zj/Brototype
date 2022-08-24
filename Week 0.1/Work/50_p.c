#include<stdio.h>
int main(){
    int n=6;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            (i+j<=n)?printf("1"):printf("%d",i);
        }
        printf("\n");
    }
}