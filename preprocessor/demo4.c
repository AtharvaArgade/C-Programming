
#include<stdio.h>

#define MARVELLOUS 11    // user defined macro

int main()
{
  #ifndef DEMO
  
    printf("Inside\n");

  #endif

  return 0;
}
