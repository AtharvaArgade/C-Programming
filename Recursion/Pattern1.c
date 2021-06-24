/*
	iRow = 4, iCol = 4

	***
	***
	***
	***
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void DisplayI(int iRow, int iCol)
{
	int i = 1, j = 1;
	while(i<=iRow)
	{
		while(j<=iCol)
		{
			printf("*\t");
			j++;
		}
		i++;
		j = 1;
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
