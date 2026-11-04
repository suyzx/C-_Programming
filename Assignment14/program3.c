#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : NonFact
//  Input           : Integer
//  Description     : Display non factors of number
//  Date            : 02/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void nonFact(int iNo)
{
    int iMul = 1;
    for(int iCnt = 1 ; iCnt <=iNo ; iCnt ++)
    {
        if((iNo % iCnt) != 0)
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

    nonFact(iValue1);

    return 0;
}