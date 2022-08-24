#include<stdio.h>
int main(){
    int limit,count;
    printf("enter array limit:");
    scanf("%d",&limit);
    int arr[limit],frq[limit];
    printf("Enter array elamants:");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
        frq[i]=-1;
    }for(int i=0;i<limit;i++){
        count=1;
        for(int j=i+1;j<limit;j++){
            if(j!=i){
                if(arr[i]==arr[j]){
                    frq[j]=0;
                    count++;
                }    
            }
        }if(frq[i]!=0){
            frq[i]=count;
        }
    }for(int i=0;i<limit;i++){
        if(frq[i]!=0){
            printf("elament %d : %d item\n",arr[i],frq[i]);
        }
    }
}