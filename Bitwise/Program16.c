// Accept the binary number from user and count number of bits that are on without using '/' and '%' operator.

#include<stdio.h>
#include<stdbool.h>


unsigned int CountBit(unsigned int iNo)
{
	unsigned int iMask=0x00000001, iResult=0;
	int i=0, iCnt=0;

	for(i=1;i<=32;i++)
	{
		iResult=iNo & iMask;
		if(iResult==iMask)
		{
			iCnt++;
		}
		iMask=iMask<<1;
	}
	return iCnt;
}

int main()
{
	unsigned int iValue=0;
	int iRet=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet=CountBit(iValue);
	printf("Total on bits are : %d\n",iRet);
	
	return 0;
}

