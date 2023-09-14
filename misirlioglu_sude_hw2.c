#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
	int stu_num,course,N,i=1,c=1;
	float total_grade,gpa,grade,h_gpa;
	total_grade=0;
	gpa=0;
	
	printf("Enter the number of student:");
	scanf("%d",&stu_num);
	
	for(i=1;i<=stu_num;i++)
	{
		printf("Enter the number of courses taken by %d. student: ",i);
	    scanf("%d",&N);
	    while (c<=N)
	    {
	    printf("Enter %d. course grade: ",c);
		scanf("%f",&grade);
		total_grade=total_grade+grade;
	    c++;
		}
		c=1;
		 if(gpa<total_grade/N)
    {
    	h_gpa=total_grade/N;
	}
		gpa=total_grade/N;
		printf("Student has GPA %.2lf\n",gpa);
		total_grade=0;
	}
	
	printf("\nBest student has %.2lf GPA.",h_gpa);
	return(0);
}
