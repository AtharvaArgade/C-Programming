#include<stdio.h>

int no1=10;   // Non BSS of data section
int no2;      // BSS of Data section

extern int value;     // variable declaration

extern void fun();    // Function declaration which is outside the file
//  fun is function which accepts nothing and which returns nothing. This function is defined externally.

int main()
{
  printf("Inside main\n");
  
  printf("%d\n",no1); 
  printf("%d\n",no2);
 
  printf("%d\n",value);
 
  fun();

  return 0;
}

/*
Data section :  

BSS      (Block starting with symbol)   Non initialised global variable
Non BSS  (Block starting with value)    Initalised global variable
*/
                // OUTPUT 

/*
E:\Pre_Placement_activity\parallel\storage classes>gcc extern.c demo.c -o extern

E:\Pre_Placement_activity\parallel\storage classes>extern.exe
Inside main
10
0
51
Inside Fun

E:\Pre_Placement_activity\parallel\storage classes>
*/