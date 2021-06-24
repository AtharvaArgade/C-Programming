#include<stdio.h>

int addition(int no1, int no2)
{
  int result=0;
  result=no1+no2;
  return result;
}

int substraction(int no1, int no2)
{
  int result=0;
  result=no1-no2;
  return result;
}

int main()
{
  int value1=0, value2=0, ret=0;

  //int addition(int no1, int no2)
  int (*fptr)(int, int);                // fptr is a pointer which points to the function which accepts 2 integers and return the integer
  fptr=addition;

  printf("Enter first number\n");
  scanf("%d",&value1);

  printf("Enter second number\n");
  scanf("%d",&value2);

  ret=fptr(value1, value2);            // same as ret=addition(value1, value2);

  printf("Addition is %d\n",ret);

  fptr=substraction;
  ret=fptr(value1, value2);
  printf("Substraction is %d\n",ret);

  return 0;
}

