
#include <stdio.h>
#define MARVELLOUS 11

void fun()
{
    #define MARVELLOUS 21
}
int main()
{
    printf("%d\n",MARVELLOUS);
    fun();
    printf("%d\n",MARVELLOUS);
    return 0;
}

