#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : RangeSum
//  Input           : Integer, Integer
//  Description     : addition of all numbers from  range
//  Date            : 01/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int RangeSum(int iStart , int iEnd)
{
    int iSum = 0;

    if(iStart < 0)
    {
        return -1;
    }

    for( int iCnt = iStart; iCnt <= iEnd; iCnt ++)
    {
        iSum = iSum + iCnt;        
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////

int main()
{

    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Point ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("Addition is %d", iRet);
    }

    return 0;
}