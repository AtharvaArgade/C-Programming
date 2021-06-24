/*Write a program which accept one number and position from user and 
check whether bit at that position is on or off. If bit is one return TURE 
otherwise return FALSE. 
Input : 10 2 
Output : TRUE 
*/

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
	UINT iMask = 0x00000001;
	UINT iResult = 0;

	if((iPos<1) || (iPos>32))
	{
		return -1;
	}

	iMask=iMask<<(iPos-1);

	iResult = iNo & iMask;

	if(iResult == iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

	return iResult;
}

int main() 
{ 
	UINT iValue=0, iPos=0;
	BOOL bRet=FALSE;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	printf("Enter the position\n");
	scanf("%d",&iPos);

	bRet = ChkBit(iValue, iPos);
	if(bRet==TRUE)
	{
		printf("Bit is 1\n");
	}
	else if(bRet==FALSE)
	{
		printf("Bit is 0\n");
	}
	return 0; 
} 