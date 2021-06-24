/* Accepts N from user and print all odd numbers up to N.
Input : 18
Output : 1 3 5 7 9 11 13
*/

#include<stdio.h>

void OddDisplay(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iCnt%2)!=0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
 	int iValue = 0;
 	printf("Enter number\n");
 	scanf("%d",&iValue);
 	OddDisplay(iValue);
 	return 0;
} 

