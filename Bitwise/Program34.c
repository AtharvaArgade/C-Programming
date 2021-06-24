/*   Write a program which accept one number from user and check whether 
9th or 12th bit is on or off. 
Input : 257 
Output : TRUE
*/
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
	UINT iMask1 = 0x00000100, iMask2 = 0x00000800;
	UINT iResult1 = 0, iResult2=0;

	iResult1 = iNo & iMask1;
	iResult2 = iNo & iMask2;

	if((iResult1 == iMask1) || (iResult2 == iMask2))
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
		printf("9th or 12th bit is on\n");
	}
	else
	{
		printf("9th or 12th bit is off\n");
	}

	return 0; 
}
