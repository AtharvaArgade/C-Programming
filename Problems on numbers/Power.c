// Accept two numbers from user and calculate its power.
// Input : 2 4
// Output : 2*2*2*2   (16)

// Input : 4 3
// Output : 4*4*4     (64)


#include<stdio.h>

int Power(int iNo1, int iNo2)        
{
	int iMult=1, iCnt=0;
	
	if (iNo1<0)
	{
		iNo1=-iNo1;
	}
	if( iNo2<0)
	{
		iNo2=-iNo2;
	}

	for(int iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iMult=iMult*iNo1;
	}
	return iMult;
}

int main()
{
	int iValue1=0, iValue2=0;
	int iRet=0;

	printf("Enter first number\n");
	scanf("%d",&iValue1);
	printf("Enter second number\n");
	scanf("%d",&iValue2);

	iRet=Power(iValue1, iValue2);
	printf("Result is : %d",iRet);

	return 0;
}
