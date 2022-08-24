#include<stdio.h>
int main(){
    int n=5;
    int k=n;
    for(int i=1;i<2*n;i++){
        for(int j=1;j<2*n;j++){
            if(i==n||j==k){
                printf("*");
            }else
            printf(" ");
        }
        (i<n)?k--:k++;
        printf("\n");
    }
}
