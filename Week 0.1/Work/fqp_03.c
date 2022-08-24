#include<stdio.h>
int main(){
    int n=7,x=7,y=7;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
           if(j<=x){
            printf("%c ",j+64);
           } else if(j>=y){
            printf("%c ",(2*n-j)+64);
           }else{
            printf("  ");
           }     
        }
        printf("\n");
        x--;
        y++;
    }
}










    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf("%c ",j+63);
    //     }for(int k=1;k<2*i;k++){
    //         printf("  ");
    //     }for(int l=n-1;l>=1;l--){
    //         printf("%d ",l+63);
    //     }printf("\n");
    // }
