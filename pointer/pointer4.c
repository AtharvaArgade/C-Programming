#include<stdio.h>

int main()
{
  char ch='M';
  int i=11;
  float f=10.2;
  double d=20.5;

  char *cp=&ch;
  int *ip=&i;
  float *fp=&f;
  double *dp=&d;

  // Generic pointer
  void *p=NULL;
  printf("Size of p : %d\n",sizeof(p));
  
  printf("%c\n",*cp);
  printf("%d\n",*ip);
  printf("%f\n",*fp);
  printf("%f\n",*dp);
  
  p=&ch;
  //printf("%c\n",*p);  // ERROR
  printf("%c\n",*(char *)p);

  p=&i;
  printf("%d\n",*(int *)p);

  printf("%lu\n",p);             //   6422276
  printf("%lu\n",p+1);           //   6422277
  printf("%lu\n",(char*)p+1);    //   6422280 

  return 0;
}

/*

E:\Pre_Placement_activity\parallel\pointer>gcc pointer4.c -o pointer

E:\Pre_Placement_activity\parallel\pointer>pointer.exe
M
11
10.200000
20.500000
M
11
6422276
6422277
6422280

E:\Pre_Placement_activity\parallel\pointer>
*/