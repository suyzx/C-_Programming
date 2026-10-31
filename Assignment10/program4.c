#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : FhToCs
//  Input           : Float
//  Description     : fahrenheit  convert into celsius
//  Date            : 31/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

double FhToCs ( float fTemp)
{     
    double dAns = 0;

    // 1 celcius = (fahrenheit -32) * (5/9)

    dAns = (fTemp - 32) * ((float)5/(float)9);

    return dAns;
    
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f;
    double dRet = 0;

    printf("Enter a Temperature : ");
    scanf("%f",&fValue1);

   

    dRet = FhToCs(fValue1 );

    printf("Temperature in Celsius is -> %lf",dRet);
    
   

    return 0;
}

