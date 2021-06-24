/*   Write a program which accept one number and position from user and off 
that bit. Return modified number. 
Input : 10 2 
Output : 8 
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
	UINT iMask1 = 0x00000001, iMask2=0xFFFFFFFF;
	UINT iResult = 0;

	if((iPos<1) || (iPos>32))
	{
		return -1;
	}

	iMask1=iMask1<<(iPos-1);
	iMask2=iMask2 ^ iMask1;

	iResult = iNo & iMask2;

	return iResult;
}

int main() 
{ 
	UINT iValue=0, iPos=0;
	UINT iRet=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	printf("Enter the position\n");
	scanf("%d",&iPos);

	iRet = OffBit(iValue, iPos);
	printf("Modified number is %d\n",iRet);

	return 0; 
} 
