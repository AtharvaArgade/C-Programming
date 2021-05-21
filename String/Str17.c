// Accept string from user and implement strcpy function

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
	if(src==NULL || dest==NULL)
	{
		return;
	}
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}

int main()
{
	char arr[20];
	char brr[20];

	printf("Enter string\n");
	scanf("%[^'\n']s",arr);

	strcpyX(arr, brr);

	printf("After copy string is : %s",brr);
	return 0;
}
