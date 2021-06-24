/* Write a program which checks whether 5th & 18th bit is On or OFF. 
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
	UINT iMask = 0x00020010;
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
		printf("5th and 18th bit is on\n");
	}
	else
	{
		printf("5th and 18th bit is off\n");
	}

	return 0; 
}
