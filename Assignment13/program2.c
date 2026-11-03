#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CountOdd
//  Input           : Integer
//  Description     : accept number from user and right count of ODD digit
//  Date            : 02/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) != 0)
        {
           iCount ++;
        }

        iNo = iNo / 10;        
    }
    return iCount;

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

    iRet = CountOdd(iValue1);
    printf("%d ", iRet);

    return 0;
}