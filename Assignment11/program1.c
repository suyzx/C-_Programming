#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : RangeDisplay
//  Input           : Integer, Integer
//  Description     : accept range from user and display number from that range
//  Date            : 31/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart , int iEnd)
{
    for( int iCnt = iStart; iCnt <= iEnd; iCnt ++)
    {
        printf("%d\t",iCnt);
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////

int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}