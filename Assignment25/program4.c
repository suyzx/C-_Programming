#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkDigit
//  Input           : Character 
//  Description     : Accept Character and check it is Small Case or not 
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch>='a' && ch <='z') 
    {
       
        return TRUE;
    }
    return FALSE;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////// 

int main()
{
    char cValue;

    BOOL bRet = FALSE;

   
    printf("Enter Character\n");
    scanf(" %c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("it is Small Case\n");
    }
    else
    {
        printf("it is not samll case \n");
    }

    return 0;
}