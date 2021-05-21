// Accept number from user and return addition of all the digits from that number.
// Input : 7521
// Output : 15    (7+5+2+1)

#include<stdio.h>

// Here time complexity of the program is O(n)  where n is number of digits.

int SumDigits(int iNo)
{
	int iDigit=0, iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}
	return iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet=SumDigits(iValue);
	printf("Sum is : %d\n",iRet);
	return 0;
}
