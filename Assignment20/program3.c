#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Input           : Integer , Integer
//  Description     : Pattern Printing
//  Date            : 06/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRow , int iCol)
{
    int iCnt = 0, iCnt1 = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(iCnt1 = 1; iCnt1 <= iCol; iCnt1 ++)
        {
            if((iCnt == 1) || (iCnt == iRow) || (iCnt1 == 1) || (iCnt1 == iCol) || ((iCnt1 + iCnt) == (iCol + 1)) )
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }

        printf("\n\n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iValue2 = 0;

    printf("Enter Rows : \n");
    scanf("%d",&iValue);

    printf("Enter Columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue , iValue2);

    return 0;
}