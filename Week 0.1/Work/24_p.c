#include<stdio.h>
int main(){
    int n=3,k=1,l=1;
    for(int i=1;i<=2*n+1;i++){
        for(int j=1;j<=i;j++){
            (i%2==1)?printf("%c ",k+64): printf("%d ",l);
        }
        (i%2==1)?k++:l++;
        printf("\n");
    }
}