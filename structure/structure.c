#include<stdio.h>

int main()
{
  // Structure Declaration
  struct Demo
  {
    int no;
    float f;
    double d;
  };

  // Object Creation
  struct Demo obj1;
  struct Demo obj2;
  struct Demo obj3={101,80.5,90.5};   // Member initalisation list
  // But here we have to intialise all the elements of structure by using member initalisation list

  // Object Initalisation           // Member by Member initalisation
  obj1.no=11;
  obj1.f=10.5;
  obj1.d=20.5;

  obj2.no=21;
  obj2.f=50.5;
  obj2.d=100.5;

  // Structure member accessing
  printf("Size of the object obj1 is : %d\n",sizeof(obj1));
  printf("Contents of obj1\n");
  printf("Obj1.no is %d\n",obj1.no);
  printf("Obj1.f is %.2f\n",obj1.f);
  printf("Obj1.d is %f\n",obj1.d);
  return 0;
}
/*
E:\Pre_Placement_activity\parallel\structure>gcc structure.c -o structure

E:\Pre_Placement_activity\parallel\structure>structure.exe
Size of the object obj1 is : 16
Contents of obj1
Obj1.no is 11
Obj1.f is 10.50
Obj1.d is 20.500000

E:\Pre_Placement_activity\parallel\structure>
*/