#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkEqual
//  Input           : Integer, Integer
//  Description     : check number is equal or not
//  Date            : 02/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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

    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("enter 2 numbers : ");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("not Equal");
    }

    return 0;
}