#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Factorial
//  Input           : Integer
//  Description     : display table
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
    
    for(int iCnt = 1 ; iCnt<=10 ; iCnt ++)
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