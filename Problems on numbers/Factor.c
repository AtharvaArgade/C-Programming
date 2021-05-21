// Accept number from user and display factors of that number.
// Input : 12
// Output : 1 2 3 4 6

// Input : 20
// Output : 1 2 4 5 10

/*
	iNo=6      
	
	if(6%1)==0       1
	if(6%2)==0		 2                            Number of iterations iNo times
	if(6%3)==0		 3							  if(iNo%__)==0
	if(6%4)==0		 -							  start : 1
	if(6%5)==0		 -				 			  end   : iNo	  
												  Displacement : 1
*/

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