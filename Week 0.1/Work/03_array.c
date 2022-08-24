// #include<stdio.h>
// int getLimit(){
//     int limit=0;

//     printf("enter array limit");
//     scanf("%d",&limit);

//     return limit;

// }
// int getArray(int l){
//     int arr[l];
//     printf("Enter array elamants in sorted order");
//     for(int i=0;i<l;i++){
//         scanf("%d",&arr[i]);
//     }
//     return *arr;

// }
// int main(){
//      int lk,i,j,k;
//     int l1=getLimit();
//     int arr1[l1];
//     arr1[l1]=getArray(l1);
//     int l2=getLimit();
//     int arr2[l2];
//     arr2[l2]=getArray(l2);
//    // int l1,l2;
//     lk=l1+l2;
//     // int arr1[]={1,3,5,6,7,8,9,10,11,13};
//     // int arr2[]={2,4,6,8,9,10};
//     // lk=l1+6;
//     int arr[lk];
//     for(i=0;i<lk;i++){
//         for(j)
//         if (arr1[i]<arr2[j]){
//             arr[k]=arr1[i];
//             k++;
//             i++;
//             //arr[k++]=arr2[j++];
//         }else{
//             arr[k]=arr1[i];
//             //arr[k++]=arr2[j++];
//             k++;j++;
//         }
        
//     }
//     for(i=0;i<lk;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
   int array[10] = {101, 101, 3, 4, 50, 69, 7, 8, 9, 0};
   int loop, largest, second;

   if(array[0] > array[1]) {
      largest = array[0];
      second  = array[1];
   } else {
      largest = array[1];
      second  = array[0];
   }

   for(loop = 2; loop < 10; loop++) {
      if( largest < array[loop] ) {
         second = largest;
         largest = array[loop];
      } else if( second < array[loop] ) {
         second =  array[loop];
      }
   }

   printf("Largest - %d \nSecond - %d \n", largest, second);   

   return 0;
}