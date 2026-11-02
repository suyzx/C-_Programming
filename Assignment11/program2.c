#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : RangeDisplayEven
//  Input           : Integer, Integer
//  Description     : display all even number from  range
//  Date            : 01/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart , int iEnd)
{
    for( int iCnt = iStart; iCnt <= iEnd; iCnt ++)
    {
        if((iCnt % 2) ==0)
        {
        printf("%d\t",iCnt);
        }
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}