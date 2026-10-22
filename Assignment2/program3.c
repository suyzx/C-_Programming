#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : Integer
//  Description     : Take input from user, if input<10 print hello else print demo
//  Date            : 19/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("hello");
    }
    else
    {
        printf("Demo");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{

    int iValue=0;

    printf("enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}