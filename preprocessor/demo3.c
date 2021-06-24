
#include<stdio.h>

#define MARVELLOUS 11    // user defined macro

int main()
{
  #ifdef DEMO
  
    printf("%d\n",MARVELLOUS);

  #endif

  return 0;
}

/*
E:\Pre_Placement_activity\parallel\preprocessor>gcc demo3.c -o demo

E:\Pre_Placement_activity\parallel\preprocessor>demo.exe

E:\Pre_Placement_activity\parallel\preprocessor>
*/