/* Accept number from user and display below pattern.
Input : 5
Output : A B C D E
*/

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=65;iCnt<65+iNo;iCnt++)
	{
		printf("%c ",iCnt);
	}
}

int main()
{
 	int iValue = 0;
 	printf("Enter number of elements\n");
 	scanf("%d",&iValue);
 	Pattern(iValue);
 	return 0;
}