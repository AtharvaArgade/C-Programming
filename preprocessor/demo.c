
#include<stdio.h>

#define MARVELLOUS 11    // Macro
#define ADD(A,B) A+B     // Function like macro

int Add(int no1, int no2)
{
  return no1+no2;
}

int main()
{
  int ret1=0, ret2=0;
  int x=10, y=20;
 
  ret1=ADD(x++,x++);    // x+++x++
  ret2=Add(y++,y++);    // Add(20,21);
                     
  printf("Inside main %d\n",MARVELLOUS);    
  printf("Addition is %d\n",ret1);          
  printf("Addition is %d\n",ret2);        

  return 0;
}
