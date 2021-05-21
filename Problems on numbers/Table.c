// Accept number from user and display table of that number

#include<stdio.h>

void CheckTable(int iNo)        
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=1;iCnt<=10;iCnt++)
	{
		printf("%d*%d=%d\n",iNo,iCnt,iNo*iCnt);
	}
}

int main()
{
	int iValue=0; 

	printf("Enter number \n");
	scanf("%d",&iValue);

	CheckTable(iValue);

	return 0;
}
