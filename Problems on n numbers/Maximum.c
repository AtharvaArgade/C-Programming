// Accept N numbers from user and find maximum numbers from that number.
 
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
	int i=0, iMax=0;
	
	if(Arr==NULL)
	{
		return -1;
	}
	iMax=Arr[0];

	for(i=0;i<iSize;i++)
	{
		if(Arr[i]>iMax)
		{
			iMax=Arr[i];
		}
	}
	return iMax;
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

	iRet=Maximum(arr,iLength);
	printf("Largest number is %d\n",iRet);

	free(arr);

	return 0;
}