#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : MulDigit
//  Input           : Integer
//  Description     : written multiplication of all digitr
//  Date            : 02/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int MulDigit(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        
        iMul =iMul * iDigit;
        

        iNo = iNo / 10;        
    }
    return iMul;

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////

int main()
{

    int iValue1 = 0;
    int iRet = 0;

    printf("Enter Number ");
    scanf("%d",&iValue1);

    iRet = MulDigit(iValue1);
    printf("%d ", iRet);

    return 0;
}