#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckMultipleDivisibility
//  Input           : Integer
//  Description     : Number is divisible b 3 or 5 or both
//  Date            : 21/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iNo)
{

    if(((iNo%3)==0) && ((iNo%5)==0) )
    {
        printf("Divisible by both 3 AND 5");
    }

    else if((iNo%3)==0)
    {
        printf("Divisible by 3 only");
    }

    else if((iNo%5)==0)
    {
        printf("Divisible by 5 only");
    }
    else
    {
        printf("Not Divisible By Either");
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

    CheckMultipleDivisibility(iValue1);

    return EXIT_SUCCESS;
}