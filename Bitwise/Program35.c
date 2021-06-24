/* Write a program which accept one number , two positions from user and 
check whether bit at first or bit at second position is ON or OFF. 
Input : 10 3 7 
Output : FALSE 
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CHKBit(UINT iNo, int iPos1, int iPos2)
{
	UINT iMask1 = 0x00000001, iMask2 = 0x00000001;
	UINT iResult1 = 0, iResult2=0;

	if((iPos1<1) || (iPos1>32) || (iPos2<1) || (iPos2>32))
	{
		return -1;
	}

	iMask1=iMask1<<(iPos1-1);
	iResult1 = iNo & iMask1;

	iMask2=iMask2<<(iPos2-1);
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
	UINT iValue=0, iPos1=0, iPos2=0;
	BOOL bRet=FALSE;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	printf("Enter first position\n");
	scanf("%d",&iPos1);

	printf("Enter second position\n");
	scanf("%d",&iPos2);

	bRet = CHKBit(iValue, iPos1, iPos2);
	if(bRet == TRUE)
	{
		printf("Bits at %d or %d position are ON\n",iPos1,iPos2);
	}
	else
	{
		printf("Bits at %d or %d position are OFF\n",iPos1,iPos2);
	}

	return 0; 
} 

