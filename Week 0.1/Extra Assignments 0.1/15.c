#include <stdio.h>
#include <string.h>

int main(){

    int i,j,limit;
    printf("Enter the limit:");
    scanf("%d",&limit);
    
    for(i=1;i<=limit;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(int k=(limit-(i));k>0;k--){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
  	return 0;
    
}