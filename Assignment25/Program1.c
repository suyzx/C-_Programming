#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkAlpha
//  Input           : Character 
//  Description     : Accept Character and check it alphabet or not
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch>='A' && ch <='Z') || ((ch>='a' && ch<='z')))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("Character it is\n");
    }
    else
    {
        printf("Not a Charactr \n");
    }

    return 0;
}