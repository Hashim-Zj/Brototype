#include <stdio.h>

int main(){
int n=5
for(int i=0;i<n;i++){
    for(int s=1;s<=i;s++){
        printf(" ");
    }for(int k=1;k<=n;k++){
        if(k==1||k==n||i==n-1||i==0){
        printf("*");
        }else{
        printf(" ")
         }
    }
    printf("\n");
}

    return 0;
}