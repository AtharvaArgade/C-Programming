// Accept N numbers and another number from user and find frequency of that number. 
 
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iValue)
{
	int iCnt=0, i=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==iValue)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	int *arr=NULL;
	int iLength=0, i=0, iRet=0, iNo=0;

	printf("Enter the number of elements\n");
	scanf("%d",&iLength);

	printf("Enter the element to search\n");
	scanf("%d",&iNo);

	arr=(int*)malloc(iLength*sizeof(int));
	if(arr==NULL)
	{
		printf("Unable to allocate number\n");
		return -1;
	}

	printf("Enter the elements:\n");
	for (i = 0; i < iLength; i++)
	{
		scanf("%d",&arr[i]);
	}

	iRet=Frequency(arr,iLength,iNo);
	printf("Frequency is : %d\n",iRet);

	free(arr);
	
	return 0;
}
