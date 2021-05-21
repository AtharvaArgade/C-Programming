// Accept string from user and return frequency of white spaces in that string 


#include<stdio.h>

int CountSpace(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[10];
	int iRet=0;

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountSpace(Arr);
	printf("Frequency of white spaces in string is %d\n",iRet);

	return 0;
}
