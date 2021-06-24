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
  int no1=11;
  auto int no2=21;
  int no3;

  printf("%d\n",no3);
  printf("Inside fun\n");
}