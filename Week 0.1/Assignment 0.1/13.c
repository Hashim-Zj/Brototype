#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
	char arr[25];
    int length,i,flag=0;

	printf("\nEnter a String:");
	fgets(arr,25,stdin);
    arr[strlen(arr)-1]='\0';
    length=strlen(arr);
    for (i = 0; i <length; i++){
       if(arr[i]!=arr[length-i-1])
       flag=1;
       break;
    }
    if(flag){
        printf("\"%s\" is NOT palindrom",arr);
    }else{
        printf("\"%s\" is A palindrom",arr);
    }
    return 0;
}