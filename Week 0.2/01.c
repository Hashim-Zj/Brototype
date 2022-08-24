#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter Three Number :");
    scanf("%d%d%d",&n1,&n2,&n3);
 
    int big=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);

    printf("big is %d:",big);
    
}