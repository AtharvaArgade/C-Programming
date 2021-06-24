/*  Write a program which checks whether 7th & 8th & 9th bit is On or OFF
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
	UINT iMask = 0x000001C0;
	UINT iResult = 0;

	iResult = iNo & iMask;

	if(iResult == iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main() 
{ 
	UINT iValue=0;
	BOOL bRet=FALSE;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	bRet = CheckBit(iValue);
	if(bRet==TRUE)
	{
		printf("Bits are on\n");
	}
	else
	{
		printf("Bits are off\n");
	}

	return 0; 
}

