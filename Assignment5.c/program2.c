#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckLeapyear
//  Input           : Integer
//  Description     : Check leap year or not
//  Date            : 21/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void CheckLeapyear(int iNo)
{
    if((iNo%4)==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iYear =0;


    printf("Enter a number : \n");
    scanf("%d",&iYear);

   

    CheckLeapyear(iYear);

    return EXIT_SUCCESS;
}