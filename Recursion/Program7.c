/* Write a recursive program which accept number from user and return summation of its digits. 
Input : 879 
Output : 24 
*/

#include<stdio.h>

int Display(int iNo)
{
	static int iSum = 0;
	if(iNo>0)
	{
		iSum = iSum + iNo%10;
		iNo = iNo/10;
		Display(iNo);
	}
	return iSum;
}

int main()
{
	int iValue = 0, iRet = 0; 
 	printf("Enter number\n"); 
 	scanf("%d",&iValue); 
 
 	iRet = Display(iValue); 
	printf("summation od digits is %d\n",iRet);

	return 0;
}
