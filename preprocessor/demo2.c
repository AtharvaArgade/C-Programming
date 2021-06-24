
#include<stdio.h>

#define MARVELLOUS 11    // user defined macro

int main()
{
  printf("%d\n",MARVELLOUS);
  
  #define MARVELLOUS 21
 
  printf("%d\n",MARVELLOUS);

  return 0;
}
