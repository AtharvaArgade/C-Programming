#include<stdio.h>

int main()
{
  enum Days{Mon=1, Tue, Wed, Thru, Fri, Sat, Sun};
  
  enum Days value;    // variable creation
                   
  printf("Mon :%d\n",Mon);
  printf("Tue :%d\n",Tue);
  printf("Sun :%d\n",Sun);

//  Mon++;     // Error
  printf("Value is %d\n",&value);

  value=Mon;
  printf("Value :%d\n",value);
  value++;
  printf("Value :%d\n",value);

  printf("Sizeof value :%d\n",sizeof(value));

  return 0;
}
/*
E:\Pre_Placement_activity\parallel\structure>gcc enum.c -o enum

E:\Pre_Placement_activity\parallel\structure>enum.exe
Mon :1
Tue :2
Sun :7
Value :1
Value :2
Sizeof value :4

E:\Pre_Placement_activity\parallel\structure>
*/