/* Write a program which accept string from user and display it in reverse order. 
Input : “MarvellouS” 
Output : “SuollevraM”
*/

#include<stdio.h>

void Reverse(char *str) 
{ 
  char *start=NULL, *end=NULL;
  char temp;
  if(str==NULL)
  {
  	return;
  }
  start=str;
  end=str;

  while(*str!='\0')
  {
  	end++;
  	str++;
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
 int iRet = 0; 
 printf("Enter string\n"); 
 scanf("%[^'\n']s",arr); 
 
 Reverse(arr); 
 printf(arr);
 return 0; 
}
