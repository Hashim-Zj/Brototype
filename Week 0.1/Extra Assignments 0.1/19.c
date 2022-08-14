#include <stdio.h>
#include <string.h>

int main(){
    float weight,pkg,rs=200,limit,g;
    int i;
    printf("Enter the weigh of parcel in kg:");
    scanf("%f",&weight);
    limit=weight/0.500;
    g=limit;
    pkg=(int)limit;
    if(limit<=1)
        rs=200;
   
        for(i=1;i<=limit;i++){
        
        rs=rs+170;
        }
       
  	 if((g-pkg)==0){
     rs=rs-170;
    }else{

    }{
    int s=(int)rs;
    
    printf("Rs:%d/-\n",s);
  	return 0;
    }
}