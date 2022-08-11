#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float getGrade(float mark, float maxm){ 
    float g=((mark*maxm)/100);
    return g;
}
int main() {
	float wscore,lscore,ascore;
    float grade;
    printf("\nEnter The Score of Written test:");
	scanf("%f",&wscore);
    printf("\nEnter The Score of Lab test:");
	scanf("%f",&lscore);
    printf("\nEnter The Score of Assignments:");
	scanf("%f",&ascore);
    grade=(getGrade(wscore,70)+getGrade(lscore,20)+getGrade(ascore,10));
    printf("\nThe Overall grade is :%f\n",grade);
    return 0;
}