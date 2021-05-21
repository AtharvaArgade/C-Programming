// Accept number from user and return the smallest number
// Input : 7521
// Output : 1
// Input : 121
// Output : 1
// Input : 568092
// Output : 0

#include<stdio.h>

int MinDigit(int iNo)
{
	int iDigit=0, iMin=9;
	if(iNo<0)
	{
		iNo=-iNo;
	}
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
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=MinDigit(iValue);
	printf("Minimum number is : %d\n",iRet);
	return 0;
}