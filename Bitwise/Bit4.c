// Accept the number from user and return count of on bits i.e bits that are 1.

#include<stdio.h>

int CountOne(unsigned int iNo)
{
	int iSum=0;

	while(iNo)
	{
		iSum+=(iNo%2);  // iSum=iSum+(iNo%2)
		iNo=iNo/2;
	}
	return iSum;
}

int main()
{
	unsigned int iValue=0;
	int iRet=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet=CountOne(iValue);
	printf("Number of on bits are : %d\n",iRet);

	return 0;
}

