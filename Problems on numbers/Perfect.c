// Accept number from user and check whether it is perfect or not
// Input : 12
// Output : False  (16) 1+2+3+4+6

// Input : 6
// Output : True   (6)   1+2+3

/*
	iNo=6   iSum=0   
	
	if(6%1)==0       0+1=1
	if(6%2)==0		 1+2=3                            Number of iterations 6 (iNo)
	if(6%3)==0		 3+3=6							  Loop iterates iNo number of times

	if(iNo==iSum)     True
			 							  
*/

#include<stdio.h>
#include<stdbool.h>

bool Perfect(int iNo)        
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

	if(iNo==iSum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Time Complexity : O(N/2)

int main()
{
	int iValue=0;
	bool bRet;

	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet=Perfect(iValue);
	if(bRet==true)
	{
		printf("%d is perfect number\n",iValue);
	}
	else
	{
		printf("%d is not a perfect number\n",iValue);
	}

	return 0;
}