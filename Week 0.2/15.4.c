#include<stdio.h>
int main(){
    int n=5;
    for(int i=1,l=1;i<2*n;i++){
        for(int j=1,k=1;j<2*l;j++){
            if(j==1||j==(2*l)-1){
                printf("* ");
            }else{
                (j<(2*n)/2)?printf("%d ",k++):(printf("%d ",k--));
            }
        }
        (i<n)?l++:l--;
        printf("\n");
    }
}