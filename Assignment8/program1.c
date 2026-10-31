#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Number
//  Input           : Integer
//  Description     : check small medium and large number
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Number ( int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo >= 50) && (iNo <=100))
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
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

    Number(iValue);

    return 0;
}