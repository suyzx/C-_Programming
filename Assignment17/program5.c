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

void pattern(int iRows , int iCol)
{
    int iCnt = 0, iCnt1 = 0;

    for(iCnt = 1; iCnt <= iRows; iCnt++)
    {
        for(iCnt1 = iCnt; iCnt1 <= iCol+(iCnt-1); iCnt1++)
        {
            printf("%d\t",iCnt1);
            
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

    printf("Enter rows\n");
    scanf("%d",&iValue1);

    printf("Enter Column\n");
    scanf("%d",&iValue2);

    pattern(iValue1 , iValue2);

    return 0;
}