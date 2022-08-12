#include <stdio.h>
#include <stdlib.h>

int main() {
    int limit, i, j=0,k,l,r=2,c=3,b=5,p,x=0,q=1;
    int num[10000],sortnum[10000];
	printf("Enter a limit:");
    scanf("%d",&limit);

    for(i=0;i<limit;i++){
      num[i]=i+1;
    }

    for ( i = 0; i < limit+1; i++){
        sortnum[j]=num[i];
        j++;
        if (num[i]% 2 !=0){
            i+=2;
        }
    }
    p=j-1;
    for(int i=0;i<p;i++){
            if(i==x){
                for(k=0;k<r;k++){
                   
                   printf("%d  ",sortnum[i]); 
                    i++;
                }
                printf("\n");
                r+=2;
                x+=(b*q);
                q++;
                i--;
            }else{
                for(l=0;l<c;l++){
                    printf("%d  ",sortnum[i]);
                    printf("\n");
                    i++;
                }
                c+=3;
                i--;
            }  
        }
    return 0;
}