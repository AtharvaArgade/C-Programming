#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

// void *realloc(address of old memory, number of new bytes);

int main()
{
  
  // Dynamic memory allocation

  int *ptr=NULL;
  int size=5;

  ptr=(int*)calloc(size, sizeof(int));      // c alloc Calculated Allocation
  if(ptr==NULL)
  {
    printf("Unable to allocate memory\n");
    return -1;
  }
  
  printf("Dynamic memory gets allocated in heap at the address %lu\n",ptr);

  ptr=realloc(ptr, 8 * sizeof(int));

  printf("Dynamic memory gets allocated in heap at the address %lu\n",ptr);


  printf("Free the allocated memory\n");
  free(ptr);
 
  return 0;
}

/*
E:\Pre_Placement_activity\parallel\memory>gcc memory2.c -o memory

E:\Pre_Placement_activity\parallel\memory>memory.exe
Dynamic memory gets allocated in heap at the address 1322880
Dynamic memory gets allocated in heap at the address 1321336
Free the allocated memory

E:\Pre_Placement_activity\parallel\memory>
*/