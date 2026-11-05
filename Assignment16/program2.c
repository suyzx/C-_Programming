#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : pattern
//  Input           : Integer , Integer
//  Description     : Pattern Printing
//  Date            : 04/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int iCnt1 = 0;

    for(iCnt = 1 ; iCnt <= iRow; iCnt ++)
    {
        for(iCnt1 = 1; iCnt1 <= iCol; iCnt1++)
        {
            if(iCnt%2 == 0)
            {
                printf("%c\t",('a' + (iCnt1-1)) );
            }
            else
            {
                printf("%c\t",('A' + (iCnt1-1)) );
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
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : ");
    scanf("%d",&iValue2);

    pattern(iValue1, iValue2);

}