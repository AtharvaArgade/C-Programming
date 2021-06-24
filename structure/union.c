#include<stdio.h>

int main()
{
                    
  struct Demo
  {
    int no;
    float f;
    int i;
  }obj1;

  union Hello
  {
    int no;
    float f;
    int i;
  }obj2;
 
  printf("Size of structre is %d\n",sizeof(obj1));
  printf("Size of union is %d\n",sizeof(obj2));

  obj2.no=21;

  printf("%d\n",obj2.no);
  printf("%f\n",obj2.f);
  printf("%d\n",obj2.i);
  
 return 0;
}
/*
E:\Pre_Placement_activity\parallel\structure>gcc union.c -o union

E:\Pre_Placement_activity\parallel\structure>union.exe
Size of structre is 12
Size of union is 4
21
0.000000
21

E:\Pre_Placement_activity\parallel\structure>
*/