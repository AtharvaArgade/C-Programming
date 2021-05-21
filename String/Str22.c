// Accept two string from user and concat two string and put space between two string.

#include<stdio.h>

void strcatX(const char *src, char *dest)
{
	if(src==NULL || dest==NULL)
	{
		return;
	}
	while(*dest!='\0')
	{
		dest++;
	}
	*dest=' ';
	dest++;
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

	printf("Enter first string\n");
	scanf("%[^'\n']s",arr);

	printf("Enter second string\n");
	scanf(" %[^'\n']s",brr);   

	strcatX(arr, brr);
	printf("After concat string is : %s\n",brr);
	
	return 0;
}
