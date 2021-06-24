/* Write a program which accept one number and position from user and 
toggle that bit. Return modified number. 
Input : 10 3 
Output : 14 
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
	UINT iMask = 0x00000001;
	UINT iResult = 0;

	if((iPos<1) || (iPos>32))
	{
		return -1;
	}

	iMask=iMask<<(iPos-1);

	iResult = iNo ^ iMask;

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

	iRet = ToggleBit(iValue, iPos);
	printf("Modified number is %d\n",iRet);

	return 0; 
} 

