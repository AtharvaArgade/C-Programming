/* Accept number of rows and number of columns from user and display below pattern. 
Input : iRow = 6 iCol = 6 
Output :

 * * * * * * 
 * # # # * * 
 * # # * $ * 
 * # * $ $ * 
 * * $ $ $ * 
 * * * * * *

 		  14 13 12 11
		  24 23 22 21
		  34 33 32 31
		  44 43 42 41 

 */ 
 
#include<stdio.h> 

void Pattern(int iRow, int iCol) 
{ 
 	int i=0, j=0;
 	if(iRow!=iCol)
 	{
 		return;
 	}
 	printf("\n");
 	for(i=1;i<=iRow;i++)
 	{
 		for(j=iCol;j>=1;j--)
 		{
 			if((i==1) || (j==1) || (i==iRow) || (j==iCol) || (i==j))
 			{
 				printf("*\t");
 			}
 			else if(i>j)
 			{
 				printf("$\t");
 			}
 			else
 			{
 				printf("#\t");
 			}
 		}
 		printf("\n");
 	}
 	printf("\n");
} 

int main() 
{ 
 	int iValue1 = 0, iValue2 = 0; 
 	printf("Enter number of rows and columns"); 
 	scanf("%d %d",&iValue1, &iValue2); 
 	Pattern(iValue1, iValue2); 
 	return 0; 
} 

