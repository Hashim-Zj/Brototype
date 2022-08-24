#include<stdio.h>
int main(){
    char name[100];
    int l1=0,c=0,s1=100;
    char cm,cs;
    printf("Enter a name:");
    gets(name);
    for(int i=0;name[i]!='\0';i++){
        int count=1;
        for(int j=i;name[j]!='\0';j++){
            if(i!=j){
                if(name[i]==name[j]){
                    count++;
                }
            }
        }c=count;
        if(c>l1){
            l1=c;
            cm=name[i];
        }else{
            if(s1>c){
                s1=c;
                cs=name[i]; 
            }
            
        }
    }
    printf("Maximum occurring charector is %c :%d times;\nMinimum occurring charector is %c :%d times;",cm,l1,cs,s1);  
}