#include <stdio.h>
#include <stdlib.h>

int getLength(char name){
    int i,flag=0;
    for(i=0;i<=30;i++){
        if(name[i]=='\0'){
            flag=1;
            break;
        }
    }
    if(flag!=0){
        return i;
    }
    
}
int main() {
    char fname[30],sname[30];

    //int limit,i,j,s;
	printf("Enter First Name:");
    fgets(fname,30,stdin);
    fname[getLength(fname)-1]='\0';
    printf("Enter Second Name:");
    fgets(sname,30,stdin);
    sname[getLength(sname)-1]='\0';
    printf("your enterd names are:-\nName1 :%d%s\nName2 :%d%s\n",getLength(fname),fname,getLength(sname),sname);
    
    return 0;
}