// Input : 5
// Output : * # * # * # * # * #


#include<stdio.h>

void Pattern(unsigned int iNo)
{
	int iCnt=0;
	printf("\n");
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\t#\t");
	}	
	printf("\n");
}

int main()
{
	unsigned int iValue=0;
	printf("Enter number\n");
	scanf("%u",&iValue);            // unsigned int is %u
	Pattern(iValue);
	return 0;
}