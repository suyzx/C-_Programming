#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : RectArea
//  Input           : float, float
//  Description     : calculating Area of a Rectangle
//  Date            : 31/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

double RectArea ( float fWidth , float fHeight)
{     
    double dAns = 0;

    // Area of Rectangle is -> Width * Height
    
    dAns = fHeight * fWidth;

    return dAns;
    
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f ;
    double dRet = 0;

    printf("Enter a Width : ");
    scanf("%f",&fValue1);

    printf("Enter a Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 , fValue2);

    printf("Area of rectangle is -> %lf",dRet);
    
   

    return 0;
}