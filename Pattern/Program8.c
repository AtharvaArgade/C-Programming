/* Input : 4 3 
   Output :
			1 2 3 
			1 2 3 
			1 2 3 
			1 2 3 
*/


#include<stdio.h>

void Pattern(unsigned int iRow, unsigned int iCol)
{
	int i=0, j=0;

	printf("\n");
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	unsigned int iValue1=0, iValue2=0;

	printf("Enter number of rows\n");
	scanf("%u",&iValue1);
	printf("Enter number of columns\n");
	scanf("%u",&iValue2);

	Pattern(iValue1, iValue2);
	return 0;
}