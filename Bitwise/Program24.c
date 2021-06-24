/*  Write a program which accept one number from user and toggle 7th bit of 
that number. Return modified number. 
Input : 137 
Output : 201
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iMask = 0x0000040;
	UINT iResult = 0;

	iResult = iNo ^ iMask;

	return iResult;
}

int main() 
{ 
	UINT iValue=0, iRet=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = ToggleBit(iValue);
	printf("Modified number is %d\n",iRet);

	return 0; 
} 