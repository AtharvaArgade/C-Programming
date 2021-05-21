// Input : 5 
// Output : A B C D E
// Input : 3 
// Output : A B C


#include<stdio.h>

void Pattern(unsigned int iNo)
{
	int iCnt=0;
	char ch='A';
	printf("\n");
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%c\t",ch);
		ch++;
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
