/*
    Row = 4
    Column = 4
 
            *       *       *       *
            *       *       *
            *       *
            *
            41      42      43      44
 
            31      32      33      34
 
            21      22      23      24
            
            11      12      13      14
 */
#include<stdio.h>
void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {return;}
    for(i = iRow; i>=1 ; i--)
    {
        for(j = 1; j<= i; j++)
        {
            if(i >= j)
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    unsigned int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of rows\n");
    scanf("%u",&iValue1);
    printf("Enter number of columns\n");
    scanf("%u",&iValue2);
    
    Pattern(iValue1,iValue2);
    return 0;
}



























