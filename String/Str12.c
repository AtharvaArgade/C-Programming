// Accept string from user and toggle the case

#include<stdio.h>

void strtoggle(char str[])
{
	if(str==NULL)
	{
		return;
	}

	while(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			*str=*str-32;
		}
		else if((*str>='A') && (*str<='Z'))
		{
			*str=*str+32;
		}
		str++;
	}	
}

int main()
{
	char Arr[10];

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);

	strtoggle(Arr);
	printf("Updated string is : %s\n",Arr);
	
	return 0;
}
