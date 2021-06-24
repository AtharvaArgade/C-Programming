/* Write a program which accept string from user and convert it into lower case. 
Input : “Marvellous Multi OS” 
Output : marvellous multi os 
*/
#include<stdio.h>

void strlwrx(char *str) 
{ 
 if(str==NULL)
 {
 	return;
 } 
 while(*str!='\0')
 {
 	if((*str>='A')&&(*str<='Z'))
 	{
 		*str=*str+32;
 	}
 	str++;
 }
} 
int main() 
{ 
 char arr[20]; 
 printf("Enter string"); 
 scanf("%[^'\n']s",arr); 
 strlwrx(arr); 
 printf("Modified string is %s\n",arr); 
 return 0; 
} 