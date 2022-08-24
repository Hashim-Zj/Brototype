#include<stdio.h>
int main(){
    int n=4;
    for(int i=1,l=3;i<2*n;i++){
        for(int j=3;j<=l;j++){
            printf("%d ",l);
        }
        (i<(2*n)/2)?l++:l--;
        printf("\n");
    }
}