/* Write a program which accept one number from user and off 7th bit of that 
number if it is on. Return modified number.
Input : 79 
Output : 15 
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iMask = 0xFFFFFFBF;
	UINT iResult = 0;

	iResult = iNo & iMask;

	return iResult;
}

int main() 
{ 
	UINT iValue=0, iRet=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = OffBit(iValue);
	printf("Modified number is %d\n",iRet);

	return 0; 
} 