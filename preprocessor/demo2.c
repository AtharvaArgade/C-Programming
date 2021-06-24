
#include<stdio.h>

#define MARVELLOUS 11    // user defined macro

int main()
{
  printf("%d\n",MARVELLOUS);
  
  #define MARVELLOUS 21
 
  printf("%d\n",MARVELLOUS);

  return 0;
}

/*
E:\Pre_Placement_activity\parallel\preprocessor>gcc demo2.c -o demo
demo2.c: In function 'main':
demo2.c:10: warning: "MARVELLOUS" redefined
   10 |   #define MARVELLOUS 21
      |
demo2.c:4: note: this is the location of the previous definition
    4 | #define MARVELLOUS 11    // user defined macro
      |
-------------------------------------------------------------------------------
E:\Pre_Placement_activity\parallel\preprocessor>demo.exe
11
21

E:\Pre_Placement_activity\parallel\preprocessor>
*/