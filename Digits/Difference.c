// Accept number from user and display difference between maximum and minimum number.
// Input : 89451
// Output : 8 (9-1)
// Input : 5672
// Output : 5 (7-2)

#include<stdio.h>

int MaxMin(int iNo)
{
	int iDigit=0, iMax=0, iMin=9;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>iMax)
		{
			iMax=iDigit;
		}
		if(iDigit<iMin)
		{
			iMin=iDigit;
		}
		iNo=iNo/10;
	}
	return iMax-iMin;
}
                     
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=MaxMin(iValue);
	printf("Difference is : %d\n",iRet);
	return 0;
}