#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }for(int k=1,l=1;k<2*i;k++){
            if(k>=i)
                printf("%d ",l--);
            else
                printf("%d ",l++);  
        }
        printf("\n");
    }
}