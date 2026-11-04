#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : SumNonFact
//  Input           : Integer
//  Description     : difference bet'n summetion of  its non factors and factors
//  Date            : 02/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iMul = 1;
    int iSum1 = 0, iSum2 = 0;
    for(int iCnt = 1 ; iCnt <iNo ; iCnt ++)
    {
        if((iNo % iCnt) == 0)
        {
           iSum2 = iSum2 + iCnt;
        }

       else
        {
           iSum1 = iSum1 + iCnt;
        }
    }
    return iSum1 - iSum2;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{

    int iValue1 = 0;
    int iRet = 0;

    printf("Enter Number ");
    scanf("%d",&iValue1);

    iRet = SumNonFact(iValue1);
    printf("%d", iRet);

    return 0;
}