#include<stdio.h>

int main(){
    int *a,*b,x,y;
    printf("enter 'x' and 'y'");
    scanf("%d",&x);
    scanf("%d",&y);
    a=&x;
    b=&y;
    printf("Before swaping: 'x':%d 'y':%d\n",x,y);
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("After swaping: 'x':%d 'y':%d\n",x,y);

}