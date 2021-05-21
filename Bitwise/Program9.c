// Accept the number from user and check whether third, fivth and seventh bit is on or off.

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
	unsigned iMask=0x00000054;
	unsigned int Result=0;

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

	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet=CheckBit(iValue);
	
	if(bRet==true)
	{
		printf("3, 5, 7 bits are on\n");
	}
	else
	{
		printf("3, 5, 7 bits are off\n");
	}

	return 0;
}

