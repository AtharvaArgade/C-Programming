/* Accept N numbers from user and return product of all odd elements. 
Input : N : 6 
 
 Elements : 15 66 3 70 10 88 
Output : 45 
Input : N : 6 
 
 Elements : 44 66 72 70 10 88 
Output : 0
 */
 
#include<stdio.h> 
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
	int i=0, iMult=1, iFlag=0;
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)!=0)
		{
			iMult=iMult*Arr[i];
		}
		if(Arr[i]==1)
		{
			iFlag=1;
		}
	}
	if(iMult>1)
	{
		return iMult;
	}
	else if(iFlag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int main() 
{ 
	int *p=NULL;
 	int iSize=0, iRet=0;

 	printf("Enter the number of elements\n");
 	scanf("%d",&iSize);

 	p=(int*)malloc(iSize*sizeof(int));
 	if(p==NULL)
 	{
 		printf("Unable to allocate size\n");
 		return -1;
 	}

 	printf("Enter the elements\n");
 	for(int i=0;i<iSize;i++)
 	{
 		scanf("%d",&p[i]);
 	}

 	iRet=Product(p,iSize);
 	printf("Product of all odd numbers is %d\n",iRet);

 	free(p);
 	return 0;
} 
 	