#include<stdio.h>

// typedef  Original_Datatype_Name  New_Datatype_Name;

int main()
{
 struct Demo
 {
   int i;
   float f;
 };

 typedef struct Demo DEMO;
 typedef struct Demo * PDEMO;

 DEMO obj;
 PDEMO ptr=&obj;

 obj.i=11;
 obj.f=10.5;

 printf("%d\n",ptr->i);
 printf("%f\n",ptr->f);
 printf("%d\n",obj.i);
 printf("%f\n",obj.f);
             
    
 return 0;
}
