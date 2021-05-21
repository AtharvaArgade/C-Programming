// Accept string from user and copy data in other string in reverse order

#include<stdio.h>

void strcpyrev(char *src, char *dest)
{
	int iCnt=0;
	if(src==NULL || dest==NULL)
	{
		return;
	}
	while(*src!='\0')
	{
		src++;
		iCnt++;
	}
	src--;
	while(iCnt>0)
	{
		*dest=*src;
		src--;
		dest++;
		iCnt--;
	}
	*dest='\0';
}

int main()
{
	char arr[20];
	char brr[20];

	printf("Enter string\n");
	scanf("%[^'\n']s",arr);

	strcpyrev(arr, brr);

	printf("After copy string is : %s",brr);
	return 0;
}
