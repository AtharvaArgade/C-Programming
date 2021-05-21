// Accept the number from user and off the third and seventh bit from the number.

#include<stdio.h>

// 1111 1111 1111 1111 1111 1111 1011 1011
//  F    F    F    F     F   F    B    B

unsigned int OffBit(unsigned int iNo)
{
	unsigned int iMask = 0xFFFFFFBB;
	unsigned int Result = 0;

	Result = iNo & iMask;

	return Result;
}

int main()
{
	unsigned int iValue=0;
	unsigned int iRet=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet=OffBit(iValue);
	printf("Number after updation : %d\n",iRet);

	return 0;
}

