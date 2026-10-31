#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : Integer
//  Description     : display Pattern
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Display ( int iNo)
{    
    for(int iCnt = 1 ; iCnt<=iNo ; iCnt ++)
    {
        printf(" * \t");
    }
    for(int iCnt = 1 ; iCnt<=iNo ; iCnt ++)
    {
        printf(" # \t");
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
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

   

    return 0;
}