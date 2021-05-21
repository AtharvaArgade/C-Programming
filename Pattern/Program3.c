// Input : 5
// Output : 1 * 2 * 3 * 4 * 5 *


#include<stdio.h>

void Pattern(unsigned int iNo)
{
	int iCnt=0;
	printf("\n");
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\t*\t",iCnt);
	}	
	printf("\n");
}

int main()
{
	unsigned int iValue=0;
	printf("Enter number\n");
	scanf("%u",&iValue);        
	Pattern(iValue);
	return 0;
}
