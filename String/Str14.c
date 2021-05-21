// Accept string from user and display it in reverse order

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
	while(iCnt>0)
	{
		printf("%c",*str);
		iCnt--;
		str--;
	}
}
// Time complexity is O(2N)

int main()
{
	char Arr[10];

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);

	Display(Arr);
	return 0;
}
