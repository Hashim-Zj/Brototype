#include<stdio.h>
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf("  ");
//         }
//         for(int k=1;k<2*i;k++){
//             if(i%2==0){
//                 (k%2==0)?printf("%d ",k):printf("* ");
//             }else{
//                 (k%2==0)?printf("* "):printf("%d ",k);
//             }
//         }printf("\n");
//     }
// }
int main(){
    // int n=4;
    // for(int i=1,l=1;i<=2*n;i++){
    //     for(int j=1;j<2+l;j++){
    //         (j%2==0)?printf("*"):printf("%d",l);
    //     }
    //     if(i!=n){
    //         (i<n)?l++:l--;
    //     }
    //     printf("\n");
    // }

    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*i;j++){
            if(j%2==0){
                printf("*");
            }else{
                printf("%d",i);
            }
        }printf("\n");
    }for(int i=n;i>=1;i--){
        for(int j=1;j<2*i;j++){
            if(j%2==0){
                printf("*");
            }else{
                printf("%d",i);
            }
        }printf("\n");
    }
}