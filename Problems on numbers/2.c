/* Accept number from user and display its factors in decreasing order.
Input : 12
Output : 6 4 3 2 1
Input : 13
Output : 1
Input : 10
Output : 5 2 1
*/

#include<stdio.h>
void FactRev(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=iNo/2;iCnt>0;iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d ",iCnt);
		}
	}
}
                         // Time Complexity is O(N/2)
int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf("%d",&iValue);
 	FactRev(iValue);
 	return 0;
} 
 	