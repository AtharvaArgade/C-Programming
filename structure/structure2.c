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

  struct Demo obj;

  struct Demo *p=NULL;    // p is a pointer which points to the structure demo.

  p=&obj;      // p pointer holds address of object obj.
 
  // Member initialisation using indirect access operator (->)
  p->no=11;
  p->f=10.5;
  p->d=20.5;

  printf("Value of no is %d\n",p->no);
  printf("Value of no is %f\n",p->f);
  printf("Value of no is %f\n",p->d);
  printf("%lu\n",p);
  printf("%lu\n",&obj);
  printf("%lu\n",&p);
  printf("%lu\n",&obj.d); 
 return 0;
}