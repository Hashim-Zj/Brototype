#include <stdio.h>

int main(){
int n=7;
for(int i=n;i>0;i--){
    for(int s=1;s<i;s++){
        printf(" ");
    }for(int k=1;k<n;k++){
        printf("*");
    }
    printf("\n");
}

    return 0;
}