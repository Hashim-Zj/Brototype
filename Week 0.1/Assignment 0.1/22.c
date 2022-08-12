#include <stdio.h>
#include <stdlib.h>

void getArray(int lim,int Arr[][20]){
    int j,i;
    for( i=0;i<lim;i++){
        for( j=0;j<lim;j++){
            scanf("%d",&Arr[i][j]);
        }
    }
}
void getSum(int lim, int Arr1[][20],int Arr2[][20],int Sum[][20]){
    for(int i=0;i<lim;i++){
        for(int j=0;j<lim;j++){
            Sum[i][j]=(Arr1[i][j])+(Arr2[i][j]);
        }
    }
}
void displayArray(int lim,int Arr[][20]){
    int j,i;
    for( i=0;i<lim;i++){
        for( j=0;j<lim;j++){
            printf("%d  ",Arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
	int arr1[20][20],arr2[20][20],sum[20][20],limit;
    printf("Enter The array limit:");
    scanf("%d",&limit);

    printf("Enter The First arrays values:\n");
    getArray(limit,arr1);
    printf("Enter The Second arrays values:\n");
    getArray(limit,arr2);

    getSum(limit,arr1,arr2,sum);
    
    printf("The Forst array values:\n");
    displayArray(limit,arr1);
    printf("The Second array values:\n");
    displayArray(limit,arr2);
    printf("The Sum of 2 array values:\n");
    displayArray(limit,sum);

    printf("\n");
    return 0;
}