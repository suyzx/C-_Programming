#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : Integer
//  Description     : Print numbers
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Display ( int iNo)
{
    int iCnt = 0;
    for( iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\n",iCnt);
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

    Display(iValue);

    return 0;
}