#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : OddDisplay
//  Input           : Integer
//  Description     : display Odd numbers 
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void OddDisplay ( int iNo)
{
    int iCnt = 0;
    for( iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}