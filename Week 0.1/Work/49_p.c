#include<stdio.h>
#include<math.h>
int main(){
    int n=6;
    for(int i=n;i>=-n;i--){
        if(i==0){
            continue;
        }
        for(int j=1;j<=abs(i);j++){
                printf("%d ",j);
        }
        printf("\n");
    }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
    // int i=42;
    // int a[]={12,13,14,15,16,17};
    // for(int i=1;i<6;i+=2){
    //     a[i]=42;
    // }
    // for(int i=0;i<6;i++){
    //     (i%2!=0)?printf("%c ",a[i]):printf("%d ",a[i]);
        
    // }
    // //printf("     %c    \n",i);
}