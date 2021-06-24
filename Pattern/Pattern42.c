/*Accept number of rows and number of columns from user and display below pattern. 
Input : iRow = 6 iCol = 6 
Output : * * * * * * 
		 * * 	   * 
		 *   *     * 
		 *     *   * 
		 *       * * 
		 * * * * * *

		 11 12 13 14 15
		 21 22 23 24 25
		 31 32 33 34 35
		 41 42 43 44 45
		 51 52 53 54 55
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
 		for(j=1;j<=iCol;j++)
 		{
 			if((i==1) || (i==iRow) || (j==1)  || (j==iCol) || (i==j))
 			{
 				printf("*\t");
 			}
 			else
 			{
 				printf(" \t");
 			}
 		}
 		printf("\n");
 	}
}

int main() 
{ 
 	int iValue1 = 0, iValue2 = 0; 
 	printf("Enter number of rows and columns"); 
 	scanf("%d %d",&iValue1, &iValue2); 
 	Pattern(iValue1, iValue2); 
 	return 0; 
}

