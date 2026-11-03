#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CountRange
//  Input           : Integer
//  Description     : accept number from user and written the count of digit between 3and 7
//  Date            : 02/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int CountRange(int iNo)
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

        if((iDigit >=3) && (iDigit<=7))
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

    iRet = CountRange(iValue1);
    printf("%d ", iRet);

    return 0;
}