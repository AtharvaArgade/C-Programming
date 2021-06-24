#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

// void *malloc(Number of bytes);
// void *calloc(Number of elements, sizeof each element);
// void free(address);

int main()
{
  // Static memory allocation

  int arr[5];   // 20 bytes of memory

  // Dynamic memory allocation

  int *ptr=NULL;
  int size=0;

  printf("Enter number of elements that you want to allocate\n");
  scanf("%d",&size);

  ptr=(int*)calloc(size, sizeof(int));      // c alloc Calculated Allocation
  if(ptr==NULL)
  {
    printf("Unable to allocate memory\n");
    return -1;
  }
  
  printf("Dynamic memory gets allocated in heap at the address %lu\n",ptr);
/*
  ptr[0]=10;
  ptr[1]=20;
  ptr[2]=30;
*/
  printf("Elements are %d %d %d\n",ptr[0],ptr[1],ptr[2]);

  printf("%d\n",sizeof(ptr));
  printf("%d\n",sizeof(*ptr));

  printf("Free the allocated memory\n");
  free(ptr);

  // Now ptr is a dangling pointer

  printf("Dynamic memory gets allocated in heap at the address %lu\n",ptr);

 
  return 0;
}

/*
E:\Pre_Placement_activity\parallel\memory>gcc memory1.c -o memory

E:\Pre_Placement_activity\parallel\memory>memory.exe
Enter number of elements that you want to allocate
5
Dynamic memory gets allocated in heap at the address 11217272
Elements are 10 20 30
4
4
Free the allocated memory
Dynamic memory gets allocated in heap at the address 11217272

E:\Pre_Placement_activity\parallel\memory>gcc memory1.c -o memory

E:\Pre_Placement_activity\parallel\memory>memory.exe
Enter number of elements that you want to allocate
6
Dynamic memory gets allocated in heap at the address 7678328
Elements are 0 0 0
4
4
Free the allocated memory
Dynamic memory gets allocated in heap at the address 7678328

E:\Pre_Placement_activity\parallel\memory>
*/