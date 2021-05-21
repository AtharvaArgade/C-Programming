// Accept N numbers and another number from user and find index of last occurance of that number. 
 
#include<stdio.h>
#include<stdlib.h>

int LastOccurance(int Arr[], int iSize, int iValue)
{
	int i=0;
	for(i=iSize-1;i>=0;i--)
	{
		if(Arr[i]==iValue)
		{
			break;
		}
	}
	return i;
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

	printf("Enter the elements:\n");
	for (i = 0; i < iLength; i++)
	{
		scanf("%d",&arr[i]);
	}

	iRet=LastOccurance(arr,iLength,iNo);
	if(iRet==-1)
	{
		printf("There is no such number in array");
	}
	else
	{
		printf("Index of Last occurance is %d\n",iRet);
	}

	free(arr);

	return 0;
}
