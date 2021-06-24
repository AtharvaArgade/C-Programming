#include<stdio.h>

int main()
{
  // Structure Declaration
  struct Demo
  {
    int no;
    float f;
    double d;
  }obj1={11,10.5,20.5};

 
  printf("Obj1.no is %d\n",obj1.no);
  printf("Obj1.f is %.2f\n",obj1.f);
  printf("Obj1.d is %f\n",obj1.d);

  printf("Address of structure :%lu\n",&obj1);
  printf("Address of no :%lu\n",&obj1.no);
  printf("Address of f :%lu\n",&obj1.f);
  printf("Address of d :%lu\n",&obj1.d);

  return 0;
}
/*
E:\Pre_Placement_activity\parallel\structure>gcc structure1.c -o structure

E:\Pre_Placement_activity\parallel\structure>structure.exe
Obj1.no is 11
Obj1.f is 10.50
Obj1.d is 20.500000
Address of structure :6422288
Address of no :6422288
Address of f :6422292
Address of d :6422296

E:\Pre_Placement_activity\parallel\structure>
*/