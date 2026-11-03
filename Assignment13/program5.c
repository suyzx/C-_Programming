#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CountDiff
//  Input           : Integer
//  Description     : difference between summetion of even digit and summetion of odd digit
//  Date            : 02/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0;
    
    int iSum1 = 0, iSum2 = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if( (iDigit % 2)==0)
        {
            iSum1 = iSum1 + iDigit;
        }
        if( (iDigit % 2)!=0)
        {
            iSum2 = iSum2 + iDigit;
        }
        
        iNo = iNo / 10;        
    }
    return iSum1 - iSum2;

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

    iRet = CountDiff(iValue1);
    printf("%d ", iRet);

    return 0;
}