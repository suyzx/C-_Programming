#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : pattern
//  Input           : Integer , Integer
//  Description     : Pattern Printing
//  Date            : 05/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void pattern(int iRow, int iCol)
{
    int iCnt = 0, iCnt1 = 0;
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(iCnt1 = 1; iCnt1 <= iCol; iCnt1++)
        {
            if(iCnt<iCnt1)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("enter an Rows :\n");
    scanf("%d",&ivalue1);

    printf("enter an Column :\n");
    scanf("%d",&ivalue2);

    pattern(ivalue1, ivalue2);
    return 0;
}