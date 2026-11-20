#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkCapital
//  Input           : Character 
//  Description     :Accept Character and check it is Capital or not
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch>='A' && ch <='Z') || ((ch>='a' && ch<='z')))
    {
       if(ch>='A' && ch <='Z')
       {
            return TRUE;
       }
       else
       {
            return FALSE;
       }

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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("Character is Capital\n");
    }
    else
    {
        printf("Not a Capital Charactr \n");
    }

    return 0;
}