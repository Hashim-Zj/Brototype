#include<stdio.h>

// int main(){

    //pirammid
//     for(int i=1;i<=5;i++){
//         for(int s=1;s<=5-i;s++){
//             printf(" ");  
//         }
//         for(int j=1;j<=(2*i)-1;j++){
//               printf("*");  
//         }
//         printf("\n");
//     }
// } 
//revers pirammid
// int main(){
//     for(int i=5;i>=1;i--){
//         for(int s=5;s>i;s--){
//             printf(" ");  
//         }
//         for(int j=1;j<=(2*i)-1;j++){
//               printf("*");  
//         }
//         printf("\n");
//     }
// } 

//dimond
// int main(){
//     for(int i=1;i<=5-1;i++){
//         for(int s=1;s<=5-i;s++){
//             printf(" ");  
//         }
//         for(int j=1;j<=(2*i)-1;j++){
//               printf("*");  
//         }
//         printf("\n");
//     }
//     for(int i=5;i>=1;i--){
//         for(int s=5;s>i;s--){
//             printf(" ");  
//         }
//         for(int j=1;j<=(2*i)-1;j++){
//               printf("*");  
//         }
//         printf("\n");
//     }
// } 
int main(){

    for(int i=1;i<=5;i++){
        for(int s=1;s<=5-i;s++){
            printf(" ");  
        }
        for(int j=1;j<=(2*i)-1;j++){
              printf("%d",j);  
        }
        printf("\n");
    }
}