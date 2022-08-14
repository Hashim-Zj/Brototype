    #include <stdio.h>
    int main(){
        
        char name1[20],name2[20];
        printf("Enter a String:");
        gets(name1);
        for(int i=0;i<=20;i++){
            name2[i]=name1[i];
            if(name1[i]=='\0'){
                break;
            }
        }
        printf("String : %s\n",name2);
        return 0;
    }