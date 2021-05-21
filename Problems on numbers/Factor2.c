// Accept number from user and return the addition of its factors
// Input : 12
// Output : (16) 1+2+3+4+6

// Input : 6
// Output : (6)   1+2+3

/*
	iNo=6   iSum=0   
	
	if(6%1)==0       0+1=1
	if(6%2)==0		 1+2=3                            Number of iterations 6 (iNo)
	if(6%3)==0		 3+3=6							  Loop iterates iNo number of times
			 							  
*/

#include<stdio.h>

int Factors(int iNo)        
{
	int iCnt=0;
	int iSum=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}

// Time Complexity : O(N/2)

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet=Factors(iValue);
	printf("Addition of factors are : %d\n",iRet);

	return 0;
}