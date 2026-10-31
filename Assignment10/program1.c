#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CircleArea
//  Input           : float
//  Description     : calculating Area of a Circle
//  Date            : 31/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

double CircleArea ( float iNo)
{     
    double dAns = 0;

    // Area of circle is -> Pi * radius * radius

    dAns = 3.14 * iNo * iNo;   

    return dAns;
    
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter a Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is -> %lf",dRet);
    
   

    return 0;
}