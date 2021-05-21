// Accept number from user and return the largest number
// Input : 7521
// Output : 7
// Input : 121
// Output : 2
// Input : 56892
// Output : 9

#include<stdio.h>
#include<stdbool.h>

int MaxDigit(int iNo)
{
	int iDigit=0, iMax=0;
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
		iNo=iNo/10;
	}
	return iMax;
}
                       // Time Complexity is O(N)  where N is number of digits in the input.
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=MaxDigit(iValue);
	printf("Largest number is : %d\n",iRet);
	return 0;
}