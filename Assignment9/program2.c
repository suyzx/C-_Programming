#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : DollerToINR
//  Input           : Integer
//  Description     : doller to Indian rupees conversion
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int DollerToINR ( int iNo)
{    
    
    if(iNo>0)
    {
        return (iNo * 70);
    }
    else
    {
        return -1;
    }

    
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    if(iRet == -1)
    {
        printf("Invalid number");

    }
    else
    {
    printf("Value in INR is -> %d",iRet);
    }
   

    return 0;
}