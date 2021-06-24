#include<stdio.h>

int main()
{
  int arr[5]={10,20,30,40,50};
  int *p=NULL;

  p=arr;

  printf("%lu\n",arr+1);
  printf("%lu\n",p+1);
  p++;
  printf("%lu\n",p);

//  printf("%lu\n",arr++);   // ERROR 

  return 0;
}

/*
E:\Pre_Placement_activity\parallel\pointer>gcc pointer6.c -o pointer
pointer6.c: In function 'main':
pointer6.c:15:21: error: lvalue required as increment operand
   15 |   printf("%lu\n",arr++);
      |                     ^~

E:\Pre_Placement_activity\parallel\pointer>gcc pointer6.c -o pointer

E:\Pre_Placement_activity\parallel\pointer>pointer.exe
6422284
6422284
6422284

E:\Pre_Placement_activity\parallel\pointer>
*/