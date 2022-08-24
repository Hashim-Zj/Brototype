#include<stdio.h>
int main(){
    int limit;
    printf("Enter limit:");
    scanf("%d",&limit);
    int arr[limit],frq[limit];
    printf("enter array");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
        frq[i]=-1;
    }
    int c,k;
    for(int i=0;i<limit;i++){
        int c=1;
        for(int j=i;j<limit;j++){
            if(arr[i]==arr[j]&&i!=j){
                frq[j]=0;
                c++;
            }
        }
        if(frq[i]==-1){
           frq[i]=c;
        } 
    }
    printf("elemens 2 times repiting is ");
    for(int i=0;i<limit;i++){
        if(frq[i]!=0&&frq[i]==3){
            printf("%d ",arr[i]);
        }
    }
}
    