// Accept string from user and reverse the string

#include<stdio.h>

void Display(char str[])
{
	int iCnt=0;
	if(str==NULL)
	{
		return;
	}	

	while(*str!='\0')
	{
		iCnt++;
		str++;
	}
	str--;
	for(;iCnt>0;iCnt--,str--)
	{
		printf("%c",*str);
	}
}

int main()
{
	char Arr[10];

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);

	Display(Arr);
	printf("%s",Arr);
	return 0;
}
