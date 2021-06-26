/*  Write a recursive program which accept string from user and count white spaces. 
Input : HE llo WOr lD 
Output : 3
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int CountSpace(char *str)
{
	static int iCnt = 0;
	if(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
		CountSpace(str);
	}
	return iCnt;
}

int main()
{
	char *str = NULL;
	int iRet = 0;

	str = (char*)malloc(1024*sizeof(char));
	printf("Enter the string\n");
	scanf("%[^'\n']s",str);

	str = realloc(str, strlen(str)+1);

	iRet = CountSpace(str);
	printf("Number of white spaces in the string are %d\n",iRet);

 	return 0; 
}