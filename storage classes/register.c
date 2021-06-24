#include<stdio.h>

void fun();

int main()
{
  printf("Inside main\n");
 
  fun();

  return 0;
}

void fun()
{
  auto int no1=11;
  register int no2=21;

  printf("%p\n",&no1);
//  printf("%p\n",&no2);
}