
#include<stdio.h>

#define MARVELLOUS 11    // user defined macro

int main()
{
  #ifndef DEMO
  
    printf("Inside\n");

  #endif

  return 0;
}

/*
E:\Pre_Placement_activity\parallel\preprocessor>gcc demo4.c -o demo

E:\Pre_Placement_activity\parallel\preprocessor>demo.exe
Inside

E:\Pre_Placement_activity\parallel\preprocessor>
*/