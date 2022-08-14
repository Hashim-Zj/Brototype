#include <stdio.h>

int main(){
int n=7;
for(int i=n;i>0;i--){
    for(int s=1;s<i;s++){
        printf(" ");
    }for(int k=1;k<=n;k++){
        if(k==1||k==n||i==n||i==1){
        printf("*");}else{
        printf(" ");
    }
    }
    printf("\n");
}

    return 0;
}