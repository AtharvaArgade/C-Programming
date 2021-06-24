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

  struct Hello    // Nested structure
  {
    int i;
    struct Demo obj;
  }; 
  
  struct Hello hobj;

  hobj.obj.no=11;
  hobj.obj.f=10.5;
  hobj.obj.d=20.5;
  hobj.i=21;

  printf("%d\n",hobj.i);
  printf("%d\n",hobj.obj.no);
  printf("%lu\n",&hobj);
  printf("%lu\n",&hobj.obj);
  printf("%lu\n",&hobj.obj.f);
  printf("%d\n",sizeof(hobj));

 return 0;
}