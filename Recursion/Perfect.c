// Aceept number and check whether it is perfect or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfectI(int iNo)
{
	int iSum = 0;
	int iCnt = 1;
	while(iCnt<=(iNo/2))
	{
		if(iNo%iCnt == 0)
		{
			iSum = iSum+iCnt;
		}
		iCnt++;
	}
	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool CheckPerfectR(int iNo)
{
	static int iSum = 0;
	static int iCnt = 1;
	if(iCnt<=(iNo/2))
	{
		if(iNo%iCnt == 0)
		{
			iSum = iSum+iCnt;
		}
		iCnt++;
		CheckPerfectR(iNo);
	}
	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int iNo = 0;
	bool bRet;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	bRet = CheckPerfectR(iNo);
	if(bRet == true)
	{
		printf("It is a perfect number\n");
	}
	else
	{
		printf("It is not the perfect number\n");
	}
	
	return 0;
}
