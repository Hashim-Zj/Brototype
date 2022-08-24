#include<stdio.h>
int main(){
    int arr1[100], arr2[100],l1=0,l2=0,i,j;
    printf("enter a limit:");
    scanf("%d",&l1);
    printf("entre array elamants;");
    for(i=0;i<l1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter a limit:");
    scanf("%d",&l2);
    printf("entre array elamants;");
    for(i=0;i<l2;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<l2;i++,l1++){
            arr1[l1]=arr2[i];   
    }
    for(i=0;i<l1-1;i++){
        for(j=i+1;j<l1;j++){
            if(arr1[i]<arr1[j]){
                int temp=arr1[j];
                arr1[j]=arr1[i];
                arr1[i]=temp;
            }
        } 
    }
    for(i=0;i<l1;i++){
        printf("%d  ",arr1[i]);
    }

    return 0;
}