#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkGrater
//  Input           : Integer
//  Description     : number is grater than 100 or not
//  Date            : 02/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkGrater(int iNo)
{
    if(iNo >= 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
    BOOL bRet = FALSE;

    printf("Enter a number ");
    scanf("%d", &iValue);

    bRet = ChkGrater(iValue);

    if(bRet == TRUE)
    {
        printf("Grater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}