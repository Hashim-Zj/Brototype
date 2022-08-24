#include <stdio.h>
#include<limits.h>
int main()
{
    int num, pod = 1, sod = 0,d;
    printf("enter a number:");
    scanf("%d", &num);
        while (num > 0)
        {
            d = num % 10;
            sod += d;
            pod *= d;
            num /= 10;
        } 
    printf("Product of digit is %d\nSum of Digit is %d\n\n",pod,sod);
    (sod == pod) ? printf("Thye are Equal\n") : printf("Not equal\n");
}


// enter a number:10
// elaments are: 1  3  349077831  563467971  2103220723 
//  192333175  415993905  627640600  729164712 
   