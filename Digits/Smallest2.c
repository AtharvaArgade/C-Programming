#include<stdio.h>

typedef unsigned long int ULONG;

int MinDigit(ULONG iNo)
{
	int iDigit=0, iMin=9;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<iMin)
		{
			iMin=iDigit;
			if(iMin==0)
			{
				break;
			}
		}
		iNo=iNo/10;
	}
	return iMin;
}
                     
int main()
{
	ULONG iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%lu",&iValue);
	iRet=MinDigit(iValue);
	printf("Minimum number is : %d\n",iRet);
	return 0;
}