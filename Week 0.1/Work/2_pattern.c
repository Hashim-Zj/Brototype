#include <stdio.h>



// int main(){
//     for(int i=5;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("%c ",j+64);
//         } 
//         printf("\n");   
//     }    
// }

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=i;j<=5;j++){
//             printf("%c ",j+64);
//         } 
//         printf("\n");   
//     }    
// }

// int main(){
//     for(int i=5;i>=1;i--){
//         for(int j=5;j>=i;j--){
//             printf("%c ",j+64);
//         } 
//         printf("\n");   
//     }    
// }


// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=5;j>=i;j--){
//             printf("%c ",j+64);
//         } 
//         printf("\n");   
//     }    
// }


int main(){
    for(int i=5;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%c ",j+64);
        } 
        printf("\n");   
    }    
}