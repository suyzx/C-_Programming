#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayDigit
//  Input           : Integer
//  Description     : display Digit in reverse order
//  Date            : 01/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;

        
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////

int main()
{

    int iValue1 = 0;

    printf("Enter Number ");
    scanf("%d",&iValue1);

    DisplayDigit(iValue1);

    return 0;
}