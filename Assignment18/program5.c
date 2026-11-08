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

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(iCnt1 = 1; iCnt1 <= iCol; iCnt1++)
        {
            if(iCnt == 1 || iCnt == iRow || iCnt1 == 1 || iCnt1 == iCol)
            {
                printf("%d\t",iCnt1);
            }
            else
            {
                printf("@\t");
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
    int iValue = 0, iValue2 =0;

    printf("enter Rows :\n");
    scanf("%d",&iValue);

    printf("enter Column :\n");
    scanf("%d",&iValue2);

    Pattern(iValue, iValue2);


    return 0;
}