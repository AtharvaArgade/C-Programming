#include<stdio.h>

int main()
{
                    
  struct Demo
  {
    int no;
    float f;
    int i;
  };

  struct Demo arr[4];
//arr is one dimensional array which contains 4 elements each element is of type struct demo.
// Where Demo is a structure which contains 3 members as integer, float and integer.

  arr[1].f=20.5;
  arr[0].i=51;
  arr[2].no=11;
  arr[3].no=101;

 return 0;
}
