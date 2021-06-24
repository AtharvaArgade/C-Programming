
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
