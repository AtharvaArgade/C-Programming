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
/*
E:\Pre_Placement_activity\parallel\structure>gcc enum1.c -o enum

E:\Pre_Placement_activity\parallel\structure>enum.exe
3
12
1
5
6
3

E:\Pre_Placement_activity\parallel\structure>
*/