/* Accept number from user and display its multiplication of factors.
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
Input : 13
Output : 1 (1)
Input : 10
Output : 10 (1 * 2 * 5) 
*/

#include<stdio.h>
int MultFact(int iNo)
{
	int iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	} 
	for(int iCnt=1;iCnt<=(iNo/2)+1;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iMult=iMult*iCnt;
		}
	}
	return iMult;
}
                                    //Timecomplexity is O(N/2)
int main()
{
 	int iValue = 0;
 	int iRet = 0;
 	printf("Enter number\n");
 	scanf("%d",&iValue);
 	iRet = MultFact(iValue);
 	printf("Multiplication of factors is %d",iRet);
	return 0;
} 