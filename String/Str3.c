// Accept string from user and display characters of string 


#include<stdio.h>

void Display(char str[])
{
	int iCnt=0;
	printf("Characters from string are\n");

	for(iCnt=0;str[iCnt] != '\0';iCnt++)
	{
		printf("%c\n",str[iCnt]);
	}
}

int main()
{
	char Arr[10];

	printf("Enter string\n");
	fgets(Arr,100,stdin);

	Display(Arr);

	return 0;
}
