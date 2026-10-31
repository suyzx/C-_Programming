#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : table
//  Input           : Integer
//  Description     : display table in reverse order
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void table ( int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(int iCnt = 10 ; iCnt>=1 ; iCnt --)
    {
        printf("%d\t", iCnt * iNo);
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

    table(iValue);

   

    return 0;
}