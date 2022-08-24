//Inscert a elament into last position;

// #include<stdio.h>
// int main(){
//     int limit,el;
//     printf("Enter a limit:");
//     scanf("%d",&limit);
//     int arr[limit];
//     printf("Enter elaments:");
//     for(int i=0;i<limit;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter what elaments is inserting last position");
//     scanf("%d",&el);
//     arr[limit]=el;
//     limit++;
//     printf("New array is :");
//     for(int i=0;i<limit;i++){
//         printf("%d ",arr[i]);
//     }
// }

//Incseret elaments in first position:

// #include<stdio.h>
// int main(){
//     int limit,el;
//     printf("Enter a limit:");
//     scanf("%d",&limit);
//     int arr[limit];
//     printf("Enter elaments:");
//     for(int i=0;i<limit;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter what elaments is inserting last position");
//     scanf("%d",&el);
//     for(int i=limit;i>=0;i--){
//         arr[i]=arr[i-1];
//     }limit++;
//     arr[0]=el;
//     printf("New array is :");
//     for(int i=0;i<limit;i++){
//         printf("%d  ",arr[i]);
//     }
// }

//Inscert elament into k'th position:

#include<stdio.h>
int main(){
    int limit,k,p;//p:position   ,k:elament
    printf("Enter a limit:");
    scanf("%d",&limit);
    int arr[limit];
    printf("Enter elaments:");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter a position to add new elament :(requerd is \'1 - %d\'",limit);
    scanf("%d",&p);
    if(p<1||p>limit){
        printf("invalied position:");
    }else{
        printf("enter that elament:");
    scanf("%d",&k);
    }
    for(int i=limit;i>=p-1;i--){
        arr[i]=arr[i-1];
    }
    arr[p-1]=k;
    limit++;
    for(int i=0;i<limit;i++){
        printf("%d ",arr[i]);
    }
    
}

//incsert an elament in to a sorted array:

#include<stdio.h>
int main(){
    int limit,el,i;
    printf("Enter a limit");
    scanf("%d",&limit);
    printf("Enter array elaments in sorted order :");
    int arr[limit];
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter 1 elament add to array");
    scanf("%d",&el);
    int p;
    for(int i=0;i<limit;i++){
        if(arr[0]>arr[limit-1]){
            if(arr[i]>el){
                p=i+1;
            }
        }else{
            if(arr[i]<el){
                p=i+1;
            }
        }
        
    }
    for(i=limit;i>=p;i--){
        arr[i]=arr[i-1];
    }
    arr[p]=el;
    limit++;
    printf("array is :");
    for(int i=0;i<limit;i++){
        printf("%d ",arr[i]);
    }
}