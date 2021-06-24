// Addition of n numbers

#include<stdio.h>
#include<stdlib.h>

int SumI(int Arr[], int iSize)
{
	int iSum = 0;
	int i = 0;
	while(i<iSize)
	{
		iSum = iSum+Arr[i];
		i++;
	}
	return iSum;
}

int SumR(int Arr[], int iSize)
{
	static int iSum = 0;
	static int i = 0;
	if(i<iSize)
	{
		iSum = iSum+Arr[i];
		i++;
		SumR(Arr,iSize);
	}
	return iSum;
}

int main()
{
	int iNo = 0, i = 0, iRet = 0;
	int *arr = NULL;
	printf("Enter the number of elements\n");
	scanf("%d",&iNo);

	arr = (int*)malloc(sizeof(int));
	printf("Enter the elements");
	while(i<iNo)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	iRet = SumR(arr,iNo);
	printf("Addition is %d\n",iRet);

	free(arr);

	return 0;
}
