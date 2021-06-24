/* Accept N numbers from user and display all such elements which are multiples of 11. 
Input : N : 6 
Elements : 85 66 3 55 93 88 
Output : 66 55 88 
 */
 
#include<stdio.h> 
#include<stdlib.h>

void Display(int Arr[], int iLength) 
{ 
	int i=0;
	printf("Elements which are multiples of 11 are :\n");
	
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%11)==0)
		{
			printf("%d\n",Arr[i]);
		}
	}  
} 

int main() 
{ 
 	int iSize = 0,iCnt = 0; 
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
 	
 	Display(p, iSize); 
 
 	free(p); 
 	return 0; 
} 
 	