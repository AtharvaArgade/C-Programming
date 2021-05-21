// Accept number from user and return number of even digits.
// Input : 7521
// Output : 1    

// Input : 6826
// Output : 4

#include<stdio.h>

int EvenDigits(int iNo)
{
	int iCnt=0, iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if( (iDigit%2)==0 )
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}


int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet=EvenDigits(iValue);
	printf("Number of even digits are : %d\n",iRet);
	return 0;
}