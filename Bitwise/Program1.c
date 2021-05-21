// Accept the number from user and display its binary form

#include<stdio.h>

void Display(unsigned int iNo)
{
	unsigned int iDigit = 0;
	while(iNo>0)
	{
		iDigit = iNo%2;
		printf("%u\t",iDigit);
		iNo=iNo/2;
	}
}


int main()
{
	unsigned int iValue=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}

