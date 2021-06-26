/* Write a recursive program which accept number from user and return smallest digit 
Input : 87983 
Output : 3
*/

#include<stdio.h>

int SmallestDigit(int iNo)
{
	static int iMin = 9;
	if(iNo>0)
	{
		if(iMin>iNo%10)
		{
			iMin = iNo%10;
		}
		iNo = iNo/10;
		SmallestDigit(iNo);
	}
	return iMin;
}

int main()
{
	int iValue = 0, iRet = 0; 
 	printf("Enter number\n"); 
 	scanf("%d",&iValue); 
 
 	iRet = SmallestDigit(iValue);
 	printf("Smallest Digit is %d\n",iRet);

	return 0;
}

