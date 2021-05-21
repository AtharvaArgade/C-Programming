// Accept the number and position from user and if the bit at that position is on then off it.

#include<stdio.h>
#include<stdbool.h>


int OffBit(unsigned int iNo, int iPos)
{
	unsigned int iMask=0x00000001;
	unsigned int Result=0;

	if((iPos<1) || (iPos>32))
	{
		return 0;
	}

	iMask=iMask<<(iPos-1);
	iMask=~iMask;

	Result = iNo & iMask;

	return Result;
}

int main()
{
	unsigned int iValue=0;
	int iRet=0, iPos=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	printf("Enter position \n");
	scanf("%d",&iPos);

	iRet=OffBit(iValue, iPos);
	printf("New number is : %d",iRet);
	
	return 0;
}

