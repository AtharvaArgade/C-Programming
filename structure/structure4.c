#include<stdio.h>

int main()
{            
  // Self referential structure         
  struct Demo
  {
    int no;
    struct Demo *ptr;
  };
  
  struct Demo *p=NULL;

  struct Demo obj1;
  struct Demo obj2;

  p=&obj1;

  obj1.no=11;
  obj1.ptr=&obj2;

  obj2.no=21;
  obj2.ptr=NULL;

 return 0;
}