#include<stdio.h>

int main()
{
  int arr[5]={10,20,30,40,50};

  int *ptr1=NULL;
  int *ptr2=NULL;

  ptr1=&(arr[0]);

  ptr2=&(arr[3]);

  printf("%lu\n",ptr2);
  ptr2--;
  printf("%lu\n",ptr2);

  return 0;
}