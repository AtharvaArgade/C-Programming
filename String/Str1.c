// Accept string from user and display characters of string 


#include<stdio.h>

void Display(char *str)
{
	printf("Characters from string are\n");

	while(*str != '\0')
	{
		printf("%c\n",*str);
		str++;
	}
}

int main()
{
	char Arr[10];

	printf("Enter your name\n");
	fgets(Arr,100,stdin);

	Display(Arr);

	return 0;
}
