#include<stdio.h>

int main()
{
  int no=11;

  int *p=&no;

  int **q=&p;

  int ***x=&q;

  int ****y=&x;

  int *****z=&y;
 
printf("i : %d\n",no);
printf("i : %d\n",*p);
printf("i : %d\n",**q);
printf("i : %d\n",***x);
printf("i : %d\n",****y);
printf("i : %d\n",*****z);


  return 0;
}