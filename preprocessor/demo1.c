
#include<stdio.h>

//  #define NULL (void *)0   // Predefined Macro


#define MARVELLOUS 11    // user defined macro

int main()
{
  printf("%d\n",MARVELLOUS);
  
  #undef MARVELLOUS 
 
//  printf("%d\n",MARVELLOUS);

  return 0;
}

/*
E:\Pre_Placement_activity\parallel\preprocessor>gcc demo1.c -o demo
demo1.c: In function 'main':
demo1.c:15:17: error: 'MARVELLOUS' undeclared (first use in this function)
   15 |   printf("%d\n",MARVELLOUS);
      |                 ^~~~~~~~~~
demo1.c:15:17: note: each undeclared identifier is reported only once for each function it appears in

E:\Pre_Placement_activity\parallel\preprocessor>gcc demo1.c -o demo

E:\Pre_Placement_activity\parallel\preprocessor>demo.exe
11

E:\Pre_Placement_activity\parallel\preprocessor>
*/