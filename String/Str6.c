// Accept string from user and return frequency of 'a' in that string 


#include<stdio.h>

int CountA(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if((*str=='a') || (*str=='A'))
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
	
	iRet=CountA(Arr);
	printf("Frequency of A/a is %d\n",iRet);

	return 0;
}
