// Accept string from user and copy data in other string by converting into capital case

#include<stdio.h>

void strcpyXX(const char *src, char *dest)
{
	if(src==NULL || dest==NULL)
	{
		return;
	}
	while(*src!='\0')
	{
		if((*src>='a') && (*src<='z'))
		{
			*dest=*src-32;
		}
		else
		{
			*dest=*src;
		}
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

	strcpyXX(arr, brr);

	printf("Original string is : %s\n",arr);
	printf("After copy string is : %s\n",brr);
	return 0;
}
