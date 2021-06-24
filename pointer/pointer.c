#include<stdio.h>

int main()
{
  int i=11;      // i is a variable of type integer initalised with the value 11.
  
  int *ip=&i;    // ip is a variable of type integer pointer which stores address of i.

  char ch='M';   // ch is a variable of type character initalised with the value 'M'.
  
  char *cp=&ch;  // cp is a variable of type character pointer which stores address of ch.

  printf("Value of i is : %d\n",i);
  printf("Address of no is : %lu\n",&i);
  printf("Value of ip : %lu\n",ip);
  printf("Address of ip :%lu\n",&ip);
  printf("Data pointed by the ip is : %d\n",*ip);
  printf("Size of the i is : %d\n",sizeof(i));
  printf("Size of ip is %d\n",sizeof(ip));

  printf("Value of ch is : %c\n",ch);
  printf("Address of ch is : %lu\n",&ch);
  printf("Value of cp : %lu\n",cp);
  printf("Address of cp :%lu\n",&cp);
  printf("Data pointed by the cp is : %c\n",*cp);
  printf("Size of the ch is : %d\n",sizeof(ch));
  printf("Size of cp is %d\n",sizeof(cp));
 
  return 0;
}
