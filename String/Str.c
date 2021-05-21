#include<stdio.h>

int main()
{
	char Arr[40];

	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);    // input ghe joparyant next line yet nahi toparyant  (^ is not equal symbol)
	
	//fgets(Arr,40,stdin);          // (kashat, kiti, kuthun)       

	//gets(Arr);          
	//scanf("%s",Arr);

	printf("Your name is : %s\n",Arr);
	return 0;
}
