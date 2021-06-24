#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

// void *malloc(Number of bytes);
// void *calloc(Number of elements, sizeof each element);
// void free(address);

int main()
{
  // Static memory allocation

  int arr[5];  

  // Dynamic memory allocation

  int *ptr=NULL;
  int size=0;

  printf("Enter number of elements that you want to allocate\n");
  scanf("%d",&size);

  ptr=(int*)malloc(size * sizeof(int));  
  if(ptr==NULL)
  {
    printf("Unable to allocate memory\n");
    return -1;
  }
  
  printf("Dynamic memory gets allocated in heap at the address %lu\n",ptr);
  printf("Ptr+1 : %lu\n",ptr+1);

  ptr[0]=10;
  ptr[1]=20;
  ptr[2]=30;

  printf("Elements are %d %d %d\n",ptr[0],ptr[1],ptr[2]);

  printf("%d\n",sizeof(ptr));
  printf("%d\n",sizeof(*ptr));

  printf("Free the allocated memory\n");
  free(ptr);

  // Now ptr is a dangling pointer

  printf("Dynamic memory gets dallocated in heap at the address %lu\n",ptr);

 
  return 0;
}
