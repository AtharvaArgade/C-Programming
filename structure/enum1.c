#include<stdio.h>

int main()
{
  enum demo{A=10/3 ,B=4*3 ,C=10%3 ,D=7-2 ,E ,F=A};

  printf("%d\n",A);
  printf("%d\n",B);
  printf("%d\n",C);
  printf("%d\n",D);
  printf("%d\n",E);
  printf("%d\n",F);

  return 0;
}
