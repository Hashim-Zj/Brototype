#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }for(int j=1,l=i;j<2*i;j++){
            if(j<(i*2)/2){
                printf("%d ",l);
                l++;
            }else{
                printf("%d ",l);
                l--;
            }
        }printf("\n");
    }
}