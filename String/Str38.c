/*  Write a program which accept string from user reverse that string in place. 
Input : “abcd” 
Output : “dcba” 
Input : “abba” 
Output : “abba”
*/

#include<stdio.h>

void StrRevX(char *str) 
{
 char *start=NULL, *end=NULL; 
 int temp=0;
 if(str==NULL)
 {
 	return;
 }
 start=str;
 end=str;

 while(*str!='\0')
 {
 	str++;
 	end++;
 }
 end--;

 while(start<end)
 {
 	temp=*start;
 	*start=*end;
 	*end=temp;
 	start++;
 	end--;
 }
} 
int main() 
{ 
 char arr[20]; 
 printf("Enter string\n"); 
 scanf("%[^'\n']s",arr); 
 StrRevX(arr); 
 printf("Modified string is : %s\n",arr); 
 return 0; 
} 
