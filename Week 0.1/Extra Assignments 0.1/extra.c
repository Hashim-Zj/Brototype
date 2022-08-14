// // #include <stdio.h>
// // #include <string.h>

// // int main()
// // {
// //   	char Str1[100], Str2[100];
// //   	int result, i;
 
// //   	printf("\n Please Enter the First String :  ");
// //   	gets(Str1);
  	
// //   	printf("\n Please Enter the Second String :  ");
// //   	gets(Str2);
  	
// //   	for(i = 0; Str1[i] == Str2[i]; i++);
		   
// //   	if(Str1[i] < Str2[i])
// //    	{
// //    		printf("\n str1 is Less than str2");
// // 	}
// // 	else if(Str1[i] > Str2[i])
// //    	{
// //    		printf("\n str2 is Less than str1");
// // 	}
// // 	else
// //    	{
// //    		printf("\n str1 is Equal to str2");
// // 	}
  	
// //   	return 0;
// // }
// // #include<stdio.h>
// #include<string.h>

// // int main()
// // {
// //     char strg1[50], strg2[50];

// //     printf("Enter first string: ");
// //     gets(strg1);

// //     printf("Enter second string: ");
// //     gets(strg2);

// //     if(strcmp(strg1, strg2)==0)
// //     {
// //         printf("\nYou entered the same string two times");
// //     }

// //     else
// //     {
// //         printf("\nEntered strings are not same!");
// //     }

// //     // signal to operating system program ran fine
// //     return 0;
// // }
// // C program to find length of the string using pointers
// #include<stdio.h>
// //#include<conio.h>

// int length_of_string(char*p)
// {
// int count = 0;
// while (*p != '\0') {
// count++;
// p++;
// }
// return count;
// }

// int main()
// {
// char str[100];
// int length;
// printf("\nEnter any string : ");
// gets(str);
// length = length_of_string(str);
// printf("\nThe length of the given string : %d\n", length);
// return 0;
// }

#include<stdio.h>
int main(){
    
    // char ah[][10]={"mustang","bmw","Benze"};
    // printf("size is:%ld",(sizeof(a)));





    int age=10;
    int *pAge=&age;
    printf("%p   %p\n",&age,pAge);printf("%d   %d\n",age,*pAge);
}