#include<stdio.h>
#include<limits.h>
int main(){
    int max=INT_MAX;
    int num,limit,flag,c=0;
    printf("Enter a limit");
    scanf("%d",&limit);
    printf("%d Prime Numbers are: ",limit);
    for(int j=1;j<=INT_MAX;j++){
        flag=0;
        for(int i=1;i<=j;i++){
            if(j%i==0){
                flag++;
            }
        }if(flag==2){
            printf("%d ",j);
            c++;
            if(c==limit){
                break;
            }
        }
    }
}