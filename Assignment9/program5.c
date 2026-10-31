#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : EvenFact
//  Input           : Integer
//  Description     : difference between ODD factorial and even factorial
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int FactorialDiff ( int iNo)
{     
    int FactOdd = 1;
    int FactEven = 1;


    if(iNo<0)
    {
        iNo = -iNo;
    }

    for ( int iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if((iCnt % 2) != 0)
        {
            FactOdd = FactOdd * iCnt;
        }
    }

    for ( int iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if((iCnt % 2) == 0)
        {
            FactEven = FactEven * iCnt;
        }
    }

    return FactEven - FactOdd;
    
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff (iValue);

    printf("factorial difference is -> %d",iRet);
    
   

    return 0;
}