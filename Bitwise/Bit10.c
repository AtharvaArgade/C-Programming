// Accept the number and position from user check whether that position bit is on or off.

#include<stdio.h>
#include<stdbool.h>


bool CheckBit(unsigned int iNo, int iPos)
{
	unsigned iMask=0x00000001;
	unsigned int Result=0;

	if((iPos<1) || (iPos>32))
	{
		return false;
	}

	iMask=iMask<<(iPos-1);

	Result=iNo & iMask;

	if(Result==iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	unsigned int iValue=0;
	bool bRet=0;
	int iPos=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	printf("Enter position\n");
	scanf("%d",&iPos);

	bRet=CheckBit(iValue, iPos);
	
	if(bRet==true)
	{
		printf("Bit is on\n");
	}
	else
	{
		printf("Bit is off\n");
	}

	return 0;
}

