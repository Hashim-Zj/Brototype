#include<stdio.h>
int main(){
    int num;
    printf("enter n");
    scanf("%d",&num);
    int flag=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            flag++;
        }
    }
    if(flag==2){
        printf("Prime");
    }else
    printf("Not");
}