
#include<stdio.h>

#define MARVELLOUS 11    // user defined macro

int main()
{
  #ifdef DEMO
  
    printf("%d\n",MARVELLOUS);

  #endif

  return 0;
}
