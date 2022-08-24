// #include<stdio.h>
// int main(){
//     int l;
//     printf("enter array limit:");
//     scanf("%d",&l);
//     int a[l];
//     printf("enter array elamends");
//     for(int i=0;i<l;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<l;i++){
//         int flag=0;
//         for(int j=0;j<l;j++){
//             if(i!=j){
//                 if(a[i]==a[j]){
//                     flag++;
//                 }
//             }  
//         }
//         if(flag==0){
//             printf("%d ",a[i]);
//         }
//     }
// }

//Add a lament in sorted array
#include<stdio.h>
int main(){
    int l,k,p=0;
    printf("enter array limit:");
    scanf("%d",&l);
    int a[l];
    for(int i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a elament");
    scanf("%d",&k);
    for(int i=0;a[i]<=k;i++){
        p=i;
    }
    for(int i=l;i>=p;i--)  {
        a[l]=a[l-1];
    }
    a[p]=k;
    for(int i=0;i<=l;i++){
        printf("%d",a[i]);
    }
        
}