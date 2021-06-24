/*  Write a program which 2 strings from user and concat second string 
after first string. (Implement strcat() function). 
Input : “Marvellous Infosystems” 
 “Logic Building” 
Output : “Marvellous Infosystems Logic Building”
*/

#include<stdio.h>

void StrCatX(char *src, char * dest) 
{ 
 if((src==NULL) || (dest==NULL))
 {
 	return;
 }
 while(*src != '\0') 
 { 
 	src++;
 } 
 *src=' ';
 src++;
 while(* dest != '\0')  
 { 
 *src=*dest;
 src++;
 dest++;
 } 
 *dest = '\0'; 
} 

int main() 
{ 
 char arr[50] ="Marvellous Infosystems"; 
 char brr[15] = "Logic Building"; 
 
 StrCatX(arr,brr); 
 
 printf("%s\n",arr); 

 return 0; 
}
