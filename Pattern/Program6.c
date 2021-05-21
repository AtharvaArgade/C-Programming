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

/*
you can also write as
	int iCnt=0;
	char ch='\0';
	for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
	{
		print("%c\t",ch);
	}
*/

int main()
{
	unsigned int iValue=0;

	printf("Enter number\n");
	scanf("%u",&iValue);

	Pattern(iValue);
	return 0;
}