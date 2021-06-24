#include<stdio.h>

int main()
{
  int arr[5] = {10,20,30,40,50};
  int *p=arr;

  printf("arr : %d\n",arr);
  printf("p : %d\n",&arr);
  printf(" : %d\n",p);
  printf("arr : %d\n",arr[1]);
  printf("arr : %d\n",1[arr]);
  printf("arr : %d\n",arr+1);
  printf("arr : %d\n",&arr+1);

  return 0;
}