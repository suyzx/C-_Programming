#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : FactRev
//  Input           : Integer
//  Description     : Display its  factors in decreasing order
//  Date            : 02/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iMul = 1;
    for(int iCnt = iNo/2 ; iCnt >=1 ; iCnt --)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }

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

    FactRev(iValue1);

    return 0;
}