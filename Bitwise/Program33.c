/*   Write a program which accept two numbers from user and display position 
of common ON bits from that two numbers. 
Input : 10 15 (1010 1111) 
Output : 2 4 
*/

#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
	UINT iMask = 0x00000001;
	UINT iResult1 = 0, iResult2 = 0;

	for(int i=1;i<=32;i++)
	{
		iResult1 = iNo1 & iMask;
		iResult2 = iNo2 & iMask;

		if(iResult1 == iResult2)
		{
			if((iResult1!= 0) && (iResult2!=0))
			{
				printf("%d\t",i);
			}	
		}
		iMask = iMask<<1; 
	}
}

int main() 
{ 
	UINT iValue1=0, iValue2=0;

	printf("Enter the first number\n");
	scanf("%d",&iValue1);

	printf("Enter the second number\n");
	scanf("%d",&iValue2);

	CommonBits(iValue1, iValue2);

	return 0; 
} 
