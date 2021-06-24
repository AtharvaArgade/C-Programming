// Accept number from user and display factors of that number

#include<stdio.h>

void DisplayFactorI(int iNo)
{
	int i = 1;
	while(i<=iNo/2)
	{
		if(iNo%i==0)
		{
			printf("%d\t",i);
		}
		i++;
	}
}

void DisplayFactorR(int iNo)
{
	static int i = 1;
	if(i<=iNo/2)
	{
		if(iNo%i==0)
		{
			printf("%d\t",i);
		}
		i++;
		DisplayFactorR(iNo);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	DisplayFactorI(iValue);
	printf("\n");
	DisplayFactorR(iValue);
	
	return 0;
}
