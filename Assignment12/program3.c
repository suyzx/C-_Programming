#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CountTwo
//  Input           : Integer
//  Description     : count frequency of 2 in a given number
//  Date            : 01/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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

        if(iDigit == 2)
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

    iRet = CountTwo(iValue1);
    printf("%d ", iRet);

    return 0;
}