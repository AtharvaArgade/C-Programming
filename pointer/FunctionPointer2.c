#include<stdio.h>

int addition(int no1, int no2)
{
  int result=0;
  result=no1+no2;
  return result;
}

int x=10;
int y;

int main()
{
  int i=51;
  int ret=0;
  int z=21;

  int (*fptr)(int, int);
  int *ptr1=&i;
  int *ptr2=&x;
  int *ptr3=&y;

  fptr=addition;

  return 0;
}

