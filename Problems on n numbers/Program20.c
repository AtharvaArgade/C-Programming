/* Accept N numbers from user and display summation of digits of each number. 
Input : N : 6 
Elements : 8225 665 3 76 953 858 
Output : 17 17 3 13 17 21
 */
 
#include<stdio.h>
#include<stdlib.h>

void DigitSum(int *Arr, int iLength)
{
	int i=0, iSum=0, iDigit=0;
	for(i=0;i<iLength;i++)
	{
		while(Arr[i]>0)
		{
			iDigit=Arr[i]%10;
			iSum=iSum+iDigit;
			Arr[i]=Arr[i]/10;
		}
		printf("%d\t",iSum);
		iSum=0;
	}
}

int main()
{
	int *p=NULL;
	int iSize=0, iCnt=0;

	printf("Enter number of elements\n");
	scanf("%d",&iSize);

	p=(int*)malloc(iSize*sizeof(int));
	if(p==NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}

	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter %d element\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	DigitSum(p,iSize);

	free(p);

	return 0;
}
