#include<stdio.h>

extern int value;

void fun();
void gun();
 
int main()
{
  printf("Inside main\n");
  printf("%d\n",value);
  fun();
  fun();
  fun();

  gun();
  gun();
  gun();

  return 0;
}

void fun()
{
  auto int no=10;
  no++;
  printf("From fun : %d\n",no);
}

void gun()
{
  static int no=10;
  no++;
printf("From gun : %d\n",no);
}