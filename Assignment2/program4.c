#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : Integer , Integer
//  Description     : accept 2 numbers from user and display first number in second number of times 
//  Date            : 19/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Display(int iNo, int frequency)
{
    int ic=0;

    for(ic=1;ic<=frequency;ic++)
    {
        printf("%d\t",iNo);
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
    int iCount =0;

    printf("enter a number : ");
    scanf("%d",&iValue);

    printf("enter a frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}