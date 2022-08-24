#include<stdio.h>
int main(){
    int n=4,k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*i;j++){
            (j%2==0)?printf("* "):printf("%d ",k++);
        }printf("\n");
    }
    int l=0;
    for(int i=n;i>=1;i--){
        k=11;
        l+=i;
        k=k-l;
        for(int j=1;j<2*i;j++){
            (j%2==0)?printf("* "):printf("%d ",k++);
        }printf("\n");
    }
}