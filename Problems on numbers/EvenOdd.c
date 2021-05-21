// Accept number from user and check whether that number is even or odd.
// Input : 4
// Output : Its Even

// Input : 7
// Output : Its odd



#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
	if( (iNo%2)==0 )
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue=0;
	bool bRet; 

	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet=CheckEven(iValue);

	if(bRet==true)
	{
		printf("%d is Even number\n",iValue);
	}
	else
	{
		printf("%d is Odd number\n",iValue);
	}

	return 0;
}
