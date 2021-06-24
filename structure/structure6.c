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
/*
E:\Pre_Placement_activity\parallel\structure>gcc structure6.c -o structure

E:\Pre_Placement_activity\parallel\structure>structure.exe
Size of structure is 14
Padding is of 0 bytes

E:\Pre_Placement_activity\parallel\structure>gcc structure6.c -o structure

E:\Pre_Placement_activity\parallel\structure>structure.exe
Size of structure is 16
Padding is of 2 bytes

E:\Pre_Placement_activity\parallel\structure>
*/