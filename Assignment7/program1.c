#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Input           : Integer
//  Description     : Print $ and *
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Pattern ( int iNo)
{
    int iCnt = 0;
    for( iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("$ \t * \t");
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

    Pattern(iValue);

    return 0;
}