// Accept N numbers from user and display even numbers.

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int *Arr, int iSize)
{
	int i=0;
	
	if((Arr==NULL) || (iSize<=0))
	{
		return;
	}

	printf("Even number of elements in array are :\n");
	for(i=0;i<iSize;i++)
	{
		if((Arr[i]%2)==0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}

int main()
{
	int *arr=NULL;
	int iLength=0,i=0;

	printf("Enter the number of elements\n");
	scanf("%d",&iLength);

	arr=(int*)malloc(iLength*sizeof(int));
	if(arr==NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}

	printf("Enter the elements in array :\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}

	DisplayEven(arr,iLength);

	free(arr);

	return 0;
}