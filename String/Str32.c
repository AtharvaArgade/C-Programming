/* Write a program which accept string from user and display only 
digits from that string. 
Input : “marve89llous121” 
Output : 89121 
Input : “Demo” 
Output : 
*/

#include<stdio.h>

void DisplayDigit(char *str) 
{ 
  if(str==NULL)
  {
  	return;
  }
  while(*str!='\0')
  {
  	if((*str>='0') && (*str<='9'))
  	{
  		printf("%c",*str);
  	}
  	str++;
  }
} 

int main() 
{ 
 char arr[20]; 
 printf("Enter string\n"); 
 scanf("%[^'\n']s",arr); 
 DisplayDigit(arr); 
 return 0; 
}

