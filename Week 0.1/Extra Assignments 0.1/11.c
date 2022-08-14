#include<stdio.h>
int main(){
    int limit,i,j;
    printf("Enter array limit:");
    scanf("%d",&limit);
    int num[limit];
    printf("enter array elamants:");
    for(i=0;i<limit;i++){
        scanf("%d",&num[i]);
    }
    printf("the repeating elaments :");
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(num[i]==num[j]){
                printf("%d ",num[i]);
            }
        }
    }
    return 0;
}