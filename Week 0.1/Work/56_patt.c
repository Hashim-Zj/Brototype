
//Question papper array pattern2.pdf
//56

#include<stdio.h>
int main(){
    // int n=6;
    // for (int i = 1; i <n; i++){
    //     for(int j=i;j<n;j++){
    //         printf("  ");
    //     }
    //     for(int k=1;k<2*i;k++){
    //         if(k==i||k==1||k==(2*i)-1){
    //             printf("* ");
    //         }else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }
    // for(int i=n;i>=1;i--){
    //     for(int j=n;j>i;j--){
    //         printf("  ");
    //     }
    //     for(int k=1;k<=(2*i)-1;k++){
    //         if(i==n||i==k||k==1||k==((2*i)-1)){
    //             printf("* ");
    //         }else
    //             printf("  ");
    //     }
    //     printf("\n");
    // }
    
    int n=5;
    for(int i=1;i<2*n;i++){
        for(int j=1;j<2*n;j++){
            if(i+j>=6&&i+j<=14&&i-j<=4&&j-i<=4){
                printf("* ");
            }
            else{
                printf("  ");
            }
         }
   printf("\n");
}

//     int n=5;
//     for(int i=1;i<2*n;i++){
//         for(int j=1;j<2*n;j++){
//             if((i+j<=10&&i<=j)&&(j-i>=0&&j+i>=10)){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//          }
//    printf("\n");
// }

}