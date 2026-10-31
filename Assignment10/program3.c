#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : KMtoMeter
//  Input           : Integer
//  Description     : Accept Distance in kilometer and convert it into meter
//  Date            : 31/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int KMtoMeter ( int iNo)
{     
    int iAns = 0;

    iAns = iNo * 1000;
    

    return iAns;
    
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

    printf("Enter a Distance  : ");
    scanf("%d",&iValue1);

    iRet = KMtoMeter(iValue1);

    printf("Distance in meter is -> %d",iRet);
    
   

    return 0;
}