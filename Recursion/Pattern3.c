/*
	iRow = 4, iCol = 3

	***
	***
	***
	***
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Display(int iCol)   // Display / travel columns
{
	static int j = 1;
	if(j<=iCol)
	{
		printf("*\t");
		j++;
		Display(iCol);   
	}
	j = 1;
}

void DisplayR(int iRow, int iCol)    // Display / travel rows
{
	static int i = 1;
	if(i<=iRow)
	{
		Display(iCol);  
		i++;
		printf("\n");
		DisplayR(iRow, iCol);   
	}
}

int main()
{
	int iNo1 = 0, iNo2 = 0;
	printf("Enter the number\n");
	scanf("%d%d",&iNo1, &iNo2);

	DisplayR(iNo1, iNo2);
	
	return 0;
}
