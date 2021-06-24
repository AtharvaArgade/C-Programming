/*
	iRow = 4, iCol = 3

	***
	***
	***
	***
*/

// By using iteration

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void DisplayI(int iRow, int iCol)
{
	int i = 1;
	while(i<=iRow)
	{
		Display(iCol);
		i++;
		printf("\n");
	}
}

int main()
{
	int iNo1 = 0, iNo2 = 0;
	printf("Enter the number\n");
	scanf("%d%d",&iNo1, &iNo2);

	DisplayI(iNo1, iNo2);
	
	return 0;
}
