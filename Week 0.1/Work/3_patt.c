#include<stdio.h>


// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }

// }
// int main(){
//     for(int i=5;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }

// }

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             (i==1||j==1||i==5||j==5) ? printf("* ") : printf("  ");
//         }
//         printf("\n");
//     }
// }

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             (j==1||i==5||i==j) ? printf("*") : printf(" ");
//         }
//         printf("\n");
//     }
// }
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             //(j==1||i==5||i==j) ? printf("*") : printf(" ");
//             printf("%d",j%2);
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int k=1;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",k++);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int k=1;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             (i+j<=5)? printf("  ") : printf("%d ",k++); 
//             k++;
//         }
//         printf("\n");
//     }
// }

// int main(){
//     //int k=1;
//     for(int i=1;i<=5;i++){
//         for(int k=5;k>i;k--){
//                         printf(" "); 
//         }
//         for(int j=1;j<=i;j++){
//             printf("%d ",j); 
//             // k++;
//         }
//         printf("\n");
//     }
// }

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

}