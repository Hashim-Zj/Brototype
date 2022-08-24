#include<stdio.h>
int main(){
    int n=5;
    for(int i=0,k=0;i<=2*n;i++){
        printf("*");
        for(int j=1,l=1;j<2*k;j++){
            (j<(2*k)/2)?printf("%d ",l++):printf("%d ",l--);
        }if(k!=0)
            printf("*");
        printf("\n");
        (i<(2*n)/2)?k++:k--;
        
    }
}