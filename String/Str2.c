// Accept string from user and display characters of string 


#include<stdio.h>

void Display(char str[])
{
	int iCnt=0;
	printf("Characters from string are\n");

	while(str[iCnt] != '\0')
	{
		printf("%c\n",str[iCnt]);
		iCnt++;
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
