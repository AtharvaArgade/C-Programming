// Accept marks of student from user and display result accordingly.
/*
	0 to 35    Fail
	35 to 50   Pass class
	50 to 60   Second class
	60 to 70   First class
	70 to 100  Distinction
*/  

#include<stdio.h>
#include<stdbool.h>

void CheckResult(int iMarks)        
{
	if( (iMarks<0) || (iMarks>100) )       // Input filter
	{
		printf("Invalid marks");
		return;
	}


	if( (iMarks>=0) && (iMarks<35) )
	{
		printf("Fail");
	}
	else if( (iMarks>=35) && (iMarks<50) )
	{
		printf("Pass class");
	}
	else if ( (iMarks>=50) && (iMarks<60))
	{
		printf("Second class");
	}
	else if ( (iMarks>=60) && (iMarks<70))
	{
		printf("First class");
	}
	else
	{
		printf("Distinction");
	}
}

int main()
{
	int iValue=0; 

	printf("Enter marks \n");
	scanf("%d",&iValue);

	CheckResult(iValue);

	return 0;
}
