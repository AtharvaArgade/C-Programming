// Aceept number and count number of on bits

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CountOneI(int iNo)
{
	int iMask = 1;
	int iCnt = 0, i = 0;
	while(i<32)
	{
		if((iNo & iMask) == iMask)
		{
			iCnt++;
		}
		i++;
		iMask = iMask<<1;
	}
	return iCnt;
}

int CountOneR(int iNo)
{
	static int iMask = 0x00000001;
	static int iCnt = 0, i = 0;
	int iRes=0;
	if(i<32)
	{
		iRes = iMask & iNo;
		if(iRes == iMask)
		{
			iCnt++;
		}
		i++;
		iMask = iMask<<1;
		CountOneR(iNo);
	}
	return iCnt;
}

int main()
{
	int iNo = 0;
	int iRet;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	iRet = CountOneR(iNo);
	printf("No of 1's are %d\n",iRet);
	
	return 0;
}