/* Write a recursive program which accept string from user and count number of characters. 
Input : Hello 
Output : 5 

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Count(char *str)
{
	static int iCnt = 0;

	if(*str != '\0')
	{
		if(((*str>='A')&&(*str<='Z')) || ((*str>='a')&&(*str<='z')))
		{
			iCnt++;
		}
		str++;
		Count(str);
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

	str = realloc(str,strlen(str)+1);

	iRet = Count(str);
	printf("Number of charaters in te string are %d\n",iRet);

	return 0;
}