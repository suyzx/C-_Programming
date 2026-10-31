#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Factorial
//  Input           : Integer
//  Description     : factorial of a given number
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int Factorial ( int iNo)
{
    int iFact = 1;

    for(int iCnt = 1 ; iCnt<=iNo ; iCnt ++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
    
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf(" factorial is %d",iRet);

    return 0;
}