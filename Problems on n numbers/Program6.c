/* Accept N numbers from user and return frequency of even numbers. 
Input : N : 6 
 Elements : 85 66 3 80 93 88 
Output : 3 
*/
 
#include<stdio.h> 
#include<stdlib.h>

int CountEven(int Arr[], int iLength) 
{ 
 	int i=0, iCnt=0;
 	for(i=0;i<iLength;i++)
 	{
 		if((Arr[i]%2)==0)
 		{
 			iCnt++;
 		}
 	}
 	return iCnt;
}

int main() 
{ 
	int iSize = 0,iRet = 0,iCnt = 0; 
	int *p = NULL; 
	
	printf("Enter number of elements\n"); 
	scanf("%d",&iSize); 
	
	p = (int *)malloc(iSize * sizeof(int)); 
	
	if(p == NULL) 
	{ 
		printf("Unable to allocate memory\n"); 
		return -1; 
	} 
	
	printf("Enter %d elements\n ",iSize); 
	for(iCnt = 0;iCnt<iSize; iCnt++) 
	{ 
		printf("Enter element : %d\n",iCnt+1); 
		scanf("%d",&p[iCnt]); 
 	} 
 	
 	iRet = CountEven(p, iSize); 
 	printf("Frequency of even number is %d\n",iRet); 
	
	free(p); 
 	return 0; 
}