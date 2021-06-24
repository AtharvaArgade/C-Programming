
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

/*
E:\Pre_Placement_activity\parallel\preprocessor>gcc demo5.c -o demo
demo5.c: In function 'fun':
demo5.c:7: warning: "MARVELLOUS" redefined
    7 |     #define MARVELLOUS 21
      |
demo5.c:3: note: this is the location of the previous definition
    3 | #define MARVELLOUS 11
      |

E:\Pre_Placement_activity\parallel\preprocessor>demo.exe
21
21

E:\Pre_Placement_activity\parallel\preprocessor>
*/