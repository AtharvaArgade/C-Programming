/* Write a recursive program which accept number from user and return its factorial. 
Input : 5 
Output : 120
*/

#include<stdio.h>

int Factorial(int iNo)
{
	static int iMult = 1;
	if(iNo>0)
	{
		iMult = iMult*iNo;
		iNo--;
		Factorial(iNo);
	}
	return iMult;
}

int main()
{
	int iValue = 0, iRet = 0; 
 	printf("Enter number\n"); 
 	scanf("%d",&iValue); 
 
 	iRet = Factorial(iValue);
 	printf("Factorial is %d\n",iRet);

	return 0;
}

