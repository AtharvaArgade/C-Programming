/* Input : 4 4
   Output :
			A 
			B B
			C C C
			D D D D 
*/


#include<stdio.h>

void Pattern(unsigned int iRow, unsigned int iCol)
{
	int i=0, j=0;
	char ch='\0';

	if(iRow!=iCol)
	{
		return;
	}

	printf("\n");
	for(i=1,ch='A'; i<=iRow; i++,ch++)
	{
		for(j=1; j<=iCol; j++)
		{
			if(i>=j)
			{
				printf("%c\t",ch);
			}
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