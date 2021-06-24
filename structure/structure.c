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
