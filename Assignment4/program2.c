#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckEvenOdd
//  Input           : Integer 
//  Description     : check Number is Even or odd
//  Date            : 20/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    if((iNo%2)==0)
    {
        printf("%d -> The number is EVEN ",iNo);
    }
    else
    {
        printf("%d -> The number is ODD ",iNo);

    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;
}