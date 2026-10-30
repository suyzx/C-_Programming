#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : Integer
//  Description     : Print number line 
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Display ( int iNo)
{
    int iCnt = 0;
    int i = 0;

    if(iNo>=0)
    { 

        for( iCnt = 0 - iNo; iCnt<=iNo; iCnt++)
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

    Display(iValue);

    return 0;
}

