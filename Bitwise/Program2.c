// Accept the number from user and return count of on bits i.e bits that are 1.

#include<stdio.h>

int CountOne(unsigned int iNo)
{
	unsigned int iDigit = 0;
	int iCnt=0;

	while(iNo>0)
	{
		iDigit = iNo%2;
		if(iDigit==1)
		{
			iCnt++;
		}
		iNo=iNo/2;
	}
	return iCnt;
}

int main()
{
	unsigned int iValue=0;
	int iRet=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet=CountOne(iValue);
	printf("Number of on bits are : %d\n",iRet);

	return 0;
}

