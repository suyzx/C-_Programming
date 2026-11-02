#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : RangeSumEven
//  Input           : Integer, Integer
//  Description     : addition of all Even numbers from  range
//  Date            : 01/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart , int iEnd)
{
    int iSum = 0;

    if(iStart < 0)
    {
        return -1;
    }

    if(iEnd < iStart)
    {
        return -1;
    }

    for( int iCnt = iStart; iCnt <= iEnd; iCnt ++)
    {
        if((iCnt % 2) == 0)
        {
        iSum = iSum + iCnt;        
        }
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

    iRet = RangeSumEven(iValue1, iValue2);

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