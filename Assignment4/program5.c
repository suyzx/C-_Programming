#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckDivisibilty
//  Input           : Integer 
//  Description     : check number is divisible by 5 or not
//  Date            : 20/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void CheckDivisibilty(int iNo)
{
    if((iNo%5)==0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 =0;


    printf("Enter a number : \n");
    scanf("%d",&iValue1);

    CheckDivisibilty(iValue1);

    return EXIT_SUCCESS;
}