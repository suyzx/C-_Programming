#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : MultipleDisplay
//  Input           : Integer
//  Description     : accecept N numbers and print 1st 5 multiples on N
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void MultipleDisplay ( int iNo)
{
    int iCnt = 0;
    for( iCnt = 1; iCnt<=5; iCnt++)
    {
        printf("%d \t", iCnt * iNo);
        
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

    MultipleDisplay(iValue);

    return 0;
}