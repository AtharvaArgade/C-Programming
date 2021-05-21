// Accept number from user and return its factorial.
// Input : 5
// Output : 5*4*3*2*1   (120)

// Input : 4 
// Output : 4*3*2*1     (24)

/*
	iNo=5           iMult=1
	1*2*3*4*5
	
	1*1		=1
	1*2		=2                            Number of iterations 5 (iNo)
	2*3		=6							  Loop iterates iNo number of times
	6*4		=24
	24*5	=120						 
										  
*/

#include<stdio.h>

int Fact(int iNo)        
{
	int iCnt=0;
	int iMult=1;

	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo==0)
	{
		return 0;
	}

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iMult=iMult*iCnt;
	}
	return iMult;
}

/*
 	using while loop:

 	int Fact(int iNo)
 	{
		int iMult=1;
		if(iNo<0)
		{ iNo=-iNo; }
		while
		{
			iMult=iMult*iNo;
			iNo--;
		}
		return iMult;
 	}
*/

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet=Fact(iValue);
	printf("Result is : %d",iRet);

	return 0;
}