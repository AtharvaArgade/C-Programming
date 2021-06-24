/*  Write a program which accept one number from user and range of 
positions from user. Toggle all bits from that range. 
Input : 897 9 13 
Toggle all bits from position 9 to 13 of input number ie 879. 
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iPos1, int iPos2)
{
	UINT iMask = 0x00000001;
	UINT iResult = 0;

	if((iPos1<1) || (iPos1>32) || (iPos2<1) || (iPos2>32))
	{
		return -1;
	}

	iMask = iMask<<(iPos1-1);
	iResult = iNo ^ iMask;

	for(int i=iPos1;i<iPos2;i++)
	{
		iMask = iMask<<1;
		iResult = iResult ^ iMask;
	}
	return iResult;
}

int main() 
{ 
	UINT iValue=0, iPos1=0, iPos2=0;
	UINT iRet=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	printf("Enter first position\n");
	scanf("%d",&iPos1);

	printf("Enter second position\n");
	scanf("%d",&iPos2);

	iRet = ToggleBitRange(iValue, iPos1, iPos2);
	printf("Modified number is %d\n",iRet);

	return 0; 
} 

