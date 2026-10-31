#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : SquareMeter
//  Input           : Integer
//  Description     : square foot to meter conversion 
//  Date            : 31/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

double SquareMeter ( int iValue)
{     
    double dAns = 0;

    dAns = iValue * 0.0929;

    return dAns;
    
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    double dRet = 0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue1);

   

    dRet = SquareMeter(iValue1 );

    printf("area in square Meter is -> %lf",dRet);
    
   

    return 0;
}

