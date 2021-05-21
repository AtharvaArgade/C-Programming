// Accept string from user and implement strncpy function.

#include<stdio.h>

void strncpyX(const char *src, char *dest, int iValue)
{
	if(src==NULL || dest==NULL || iValue<0)
	{
		return;
	}
	while((*src!='\0') && (iValue>0))
	{
		*dest=*src;
		dest++;
		src++;
		iValue--;
	}
	*dest='\0';
}

int main()
{
	char arr[20];
	char brr[20];
	int iNo=0;

	printf("Enter first string\n");
	scanf("%[^'\n']s",arr);

	printf("Enter number of elements to copy\n");
	scanf(" %d",&iNo);

	strncpyX(arr, brr, iNo);
	printf("String after copy is : %s\n",brr);
	
	return 0;
}
