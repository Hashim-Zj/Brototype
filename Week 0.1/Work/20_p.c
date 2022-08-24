#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "HELLO";
    int l = strlen(name);
    // int l=sizeof(name)/sizeof(name[0]);
    // printf("%d\n",k);
    for (int i = 1; i <= l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", name[j]);
        }
        printf("\n");
    }for(int i=l;i>=1;i--){
        for (int j = 0; j < i; j++)
        {
            printf("%c ", name[j]);
        }
        printf("\n");
    }
}