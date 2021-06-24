#include<stdio.h>

int main()
{
  int arr[5]={10,20,30,40,50};
  int *p=NULL;

  p=arr;

  printf("%lu\n",arr+1);
  printf("%lu\n",p+1);
  p++;
  printf("%lu\n",p);

//  printf("%lu\n",arr++);   // ERROR 

  return 0;
}
