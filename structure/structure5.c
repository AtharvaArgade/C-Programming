#include<stdio.h>

int main()
{                    
/* struct Demo
  {
    int no;
    char ch1;        
    char ch2;        //   character after character
    float f;
    int d;
  };
*/  
   struct Demo
  {
    int no;
    char ch1;
    float f;
    char ch2;
    int d;
  };

  struct Demo obj;
 
  int padding=0;

  padding=sizeof(obj)-(sizeof(obj.no)+sizeof(obj.ch1)+sizeof(obj.ch2)+sizeof(obj.f)+sizeof(obj.d));
  printf("Size of structure is %d\n",sizeof(obj));
  printf("Padding is of %d bytes\n",padding);

 return 0;
}
