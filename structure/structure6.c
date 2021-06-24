#include<stdio.h>

int main()
{
                    
//#pragma pack(1)

  #pragma pack(2)        // we can write 1 / 2 / 4 / 8 / 16  inside ()  
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
