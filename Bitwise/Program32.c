/*Write a program which accept one number from user and count number of 
ON (1) bits in it without using % and / operator. 
Input : 11 
Output : 3 
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
	UINT iMask = 0x00000001, iResult=0;
	int iCnt=0;

	for(int i=1;i<=32;i++)
	{
		iResult = iNo & iMask;
		if(iResult == iMask)
		{
			iCnt++;
		}
		iMask = iMask<<1;
	}
	return iCnt;
}

int main() 
{ 
	UINT iValue=0, iRet=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = CountOne(iValue);
	printf("Number of ON bits are %d\n",iRet);

	return 0; 
} 