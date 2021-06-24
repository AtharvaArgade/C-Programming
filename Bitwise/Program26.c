/*  Write a program which accept one number from user and on its first 4 
bits. Return modified number. 
Input : 73 
Output : 79
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
	UINT iMask = 0x0000000F;
	UINT iResult = 0;

	iResult = iNo | iMask;

	return iResult;
}

int main() 
{ 
	UINT iValue=0, iRet=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = OnBit(iValue);
	printf("Modified number is %d\n",iRet);

	return 0; 
} 
