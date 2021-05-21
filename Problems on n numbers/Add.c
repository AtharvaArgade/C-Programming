// Accept N numbers from user and display addition of N numbers.
 
#include<stdio.h>
#include<stdlib.h>

int Add(int Arr[], int iSize)
{
	int i=0, iSum=0;

	for(i=0;i<iSize;i++)
	{
		iSum=iSum+Arr[i];
	}
	return iSum;
}

int main()
{
	int *arr=NULL;
	int iLength=0, i=0, iRet=0;

	printf("Enter the number of elements\n");
	scanf("%d",&iLength);

	arr=(int*)malloc(iLength*sizeof(int));
	if(arr==NULL)
	{
		printf("Unable to allocate number\n");
		return -1;
	}

	printf("Enter the elements:\n");
	for (int i = 0; i < iLength; i++)
	{
		scanf("%d",&arr[i]);
	}

	iRet=Add(arr,iLength);
	printf("Summation of all the elements is : %d\n",iRet);

	free(arr);

	return 0;
}