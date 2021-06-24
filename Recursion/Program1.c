#include<stdio.h>

void Display()
{
	int i = 0;     
	
	for(i=1;i<=4;i++)
	{
		printf("*\n");   
	}
}
void DisplayR()
{
	int i = 1; 
	if(i<=4)   
	{
		printf("*\n");   
		i++;  			
		DisplayR();  	
	}
}
int main()
{
	DisplayR();
	return 0;
}
