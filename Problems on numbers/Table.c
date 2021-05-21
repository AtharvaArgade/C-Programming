// Accept number from user and display table of that number
// Input : 4
// Output : 4 8 12 16 20 24 28 32 36 40

/*
4 * 1 = 4
4 * 2 = 8			 
4 * 3 = 12           common 		4*__
4 * 4 = 16			 Start  		1
.					 End   			10
.					 Displacement  	1
.
4 * 10 = 40
*/

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