/* Write a recursive program which display below pattern. 
Input : 5 
Output : 5 4 3 2 1
*/

#include<stdio.h>

void Display(int iNo)
{
	if(iNo>0)
	{
		printf("%d\t",iNo);
		iNo--;
		Display(iNo);
	}
}

int main()
{
	int i = 0;
	printf("Enter the number\n");
	scanf("%d",&i);

	Display(i);

	return 0;
}