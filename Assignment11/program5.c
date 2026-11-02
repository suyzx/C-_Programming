#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : RangeDisplayRev
//  Input           : Integer, Integer
//  Description     : display number in reverse order
//  Date            : 01/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart , int iEnd)
{
    for( int iCnt = iEnd ; iCnt >= iStart ; iCnt --)
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}