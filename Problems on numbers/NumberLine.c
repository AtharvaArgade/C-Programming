
#include<stdio.h>

void NumberLine(int iNo)        
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	printf("\n");
	for(iCnt=-iNo;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iCnt);
	}
	printf("\n");
}

int main()
{
	int iValue=0; 

	printf("Enter number \n");
	scanf("%d",&iValue);

	NumberLine(iValue);

	return 0;
}