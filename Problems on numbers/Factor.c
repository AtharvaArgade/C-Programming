// Accept number from user and display factors of that number.

#include<stdio.h>

int Factors(int iNo)        
{
	int iCnt=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	printf("Factors are: ");
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d ",iCnt);
		}
	}

}
// Time Complexity : O(N)

int main()
{
	int iValue=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	Factors(iValue);

	return 0;
}
