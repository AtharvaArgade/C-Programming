// Accept two numbers from user and calculate frequency of digit in that number 
// Input : 75215   5
// Output : 2    

// Input : 89562    1
// Output : 0

#include<stdio.h>

int DigitFrequency(int iNo, int i)
{
	int iCnt=0, iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if((i<0) || (i>9))
	{
		printf("Invalid digit\n");
		return 0;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==i)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}


int main()
{
	int iValue1=0, iValue2=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue1);
	printf("Enter the digit that you want to search\n");
	scanf("%d",&iValue2);

	iRet=DigitFrequency(iValue1, iValue2);
	printf("Number of given digits are : %d\n",iRet);
	return 0;
}