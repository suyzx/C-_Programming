#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : MulFact
//  Input           : Integer
//  Description     : Display multiplication of factors
//  Date            : 02/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int MulFact(int iNo)
{
    int iMul = 1;
    for(int iCnt = 1 ; iCnt <= iNo/2; iCnt ++)
    {
        if((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt ;
        }
    }

    return iMul;
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

    iRet = MulFact(iValue1);
    printf("%d", iRet);

    return 0;
}