/* Write a program which accept string from user and copy the 
contents of that string into another string. (Implement strncpy() function) 
Input : “Marvellous Multi OS” 
 10 
Output : “Marvellous 
Note : If third parameter is greater than the size of source string then 
copy whole string into destination. 
*/

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt) 
{ 
 if((src==NULL) || (iCnt<0))
 {
 	return;
 }
 while((*src != '\0') && (iCnt != 0) ) 
 { 
 *dest = *src; 
 dest++; 
 src++; 
 iCnt--; 
 } 
 *dest='\0' ; 
} 
int main() 
{ 
 char arr[30] = "Marvellous Multi OS"; 
 char brr[30]; 
 StrNCpyX(arr,brr,10); 
 printf("%s\n",brr);  
 
 return 0; 
} 
