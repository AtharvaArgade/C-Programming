// Accept the number and two position from user and check whether the bit at that positions are on 
// or off.

#include<stdio.h>
#include<stdbool.h>


bool CheckBit(unsigned int iNo, int iPos1, int iPos2)
{
	unsigned iMask1=0x00000001;
	unsigned iMask2=0x00000001, iMask=0x00000000;
	unsigned int Result=0;

	if((iPos1<1) || (iPos1>32) || (iPos2<1) || (iPos2>32))
	{
		return false;
	}

	iMask1=iMask1<<(iPos1-1);
	iMask2=iMask2<<(iPos2-1);

	iMask = iMask1 | iMask2;

	Result = iNo & iMask;

	if(Result == iMask)
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
	int iPos1=0, iPos2=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	printf("Enter position 1\n");
	scanf("%d",&iPos1);

	printf("Enter position 2\n");
	scanf("%d",&iPos2);

	bRet=CheckBit(iValue, iPos1, iPos2);
	if(bRet==true)
	{
		printf("Bits is on\n");
	}
	else
	{
		printf("Bits is off\n");
	}
	return 0;
}

