// Accept N numbers from user and find minimum number from that numbers.
 
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
	int i=0, iMin=0;
	
	iMin=Arr[0];

	for(i=0;i<iSize;i++)
	{
		if(Arr[i]<iMin)
		{
			iMin=Arr[i];
		}
	}
	return iMin;
}

int main()
{
	int *arr=NULL;
	int iLength=0, i=0, iRet=0;

	printf("Enter the number of elements\n");
	scanf("%d",&iLength);

	arr=(int*)malloc(iLength*sizeof(int));

	printf("Enter the elements:\n");
	for (i = 0; i < iLength; i++)
	{
		scanf("%d",&arr[i]);
	}

	iRet=Minimum(arr,iLength);
	printf("Minimum number is %d\n",iRet);

	free(arr);

	return 0;
}
