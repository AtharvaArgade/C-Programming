/* Accept number from user and count frequency of 4 in it.
Input : 2395
Output : 0
Input : 1018
Output : 0
Input : 9440
Output : 2
Input : 922432
Output : 1
*/

#include<stdio.h>

int CountFour(int iNo)
{
 int iCnt=0;
 if(iNo<0)
  {
  	iNo=-iNo;
  }
  while(iNo>0)
  {
  	if((iNo%10)==4)
  	{
  		iCnt++;
  	}
  	iNo=iNo/10;
  }
  return iCnt;
}

int main()
{
 int iValue = 0;
 int iRet = 0;
 printf("Enter number");
 scanf("%d",&iValue);
 iRet = CountFour(iValue);
 printf("%d",iRet);

 return 0;
} 
