/*Accept number from user and check whether it contains 0 in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
  if(iNo<0)
  {
  	iNo=-iNo;
  }
  while(iNo>0)
  {
  	if((iNo%10)==0)
  	{
  		break;
  	}
  	else
  	{
  		iNo=iNo/10;
  	}
  }

  if(iNo==0)
  {
  	return FALSE;
  }
  else
  {
  	return TRUE;
  }
}

int main()
{
 int iValue = 0;
 BOOL bRet = FALSE;

 printf("Enter number");
 scanf("%d",&iValue);
 bRet = ChkZero(iValue);
 if(bRet == TRUE)
 {
 printf("It Contains Zero");
 }
 else
 {
 printf("There is no Zero");
 }
 return 0;
} 

 	
