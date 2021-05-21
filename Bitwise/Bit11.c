// Accept the number and position from user and toggle the bit at that position.

#include<stdio.h>
#include<stdbool.h>


unsigned int ToggleBit(unsigned int iNo, int iPos)
{
	unsigned iMask=0x00000001;
	unsigned int Result=0;

	if((iPos<1) || (iPos>32))
	{
		return false;
	}

	iMask=iMask<<(iPos-1);

	Result=iNo ^ iMask;

	return Result;
}

int main()
{
	unsigned int iValue=0;
	int iRet=0;
	int iPos=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	printf("Enter position\n");
	scanf("%d",&iPos);

	iRet=ToggleBit(iValue, iPos);
	printf("Updated number is : %d\n",iRet);
	
	return 0;
}

