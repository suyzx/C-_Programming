#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : SumNonFact
//  Input           : Integer
//  Description     : Display summetion of all its non factors
//  Date            : 02/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iMul = 1;
    int iSum = 0;
    for(int iCnt = 1 ; iCnt <=iNo ; iCnt ++)
    {
        if((iNo % iCnt) != 0)
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