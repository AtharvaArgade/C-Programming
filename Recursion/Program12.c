/* Write a recursive program which accept number from user and return largest digit 
Input : 87983 
Output : 9 
*/

#include<stdio.h>

int LargestDigit(int iNo)
{
	static int iMax = 0;
	if(iNo>0)
	{
		if(iMax < iNo%10)
		{
			iMax = iNo%10;
		}
		iNo = iNo/10;
		LargestDigit(iNo);
	}
	return iMax;
}

int main()
{
	int iValue = 0, iRet = 0; 
 	printf("Enter number\n"); 
 	scanf("%d",&iValue); 
 
 	iRet = LargestDigit(iValue); 
	printf("Largest Digit is %d\n",iRet);

	return 0;
}
