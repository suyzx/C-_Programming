#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : EvenFact
//  Input           : Integer
//  Description     : ODD factorial of a Given Number
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int EvenFact ( int iNo)
{     
    int iFact = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for ( int iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
    

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

    iRet = EvenFact(iValue);

    printf("Factorial is -> %d",iRet);
    
   

    return 0;
}