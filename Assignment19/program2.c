#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Input           : Integer , Integer
//  Description     : Pattern Printing
//  Date            : 05/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, iCnt1 = 0;
    for(iCnt = 1; iCnt <= iRow; iCnt ++)
    {
        for(iCnt1 = 1; iCnt1 <= iCol; iCnt1++)
        {
            if((iCol + 2)>(iCnt1+iCnt))
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

    printf("Enter Row  : \n");
    scanf("%d",&ivalue1);

    printf("Enter Column  : \n");
    scanf("%d",&ivalue2);

    Pattern(ivalue1, ivalue2);

    return 0;
}