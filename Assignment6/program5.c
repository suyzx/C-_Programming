#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CalculateBonus
//  Input           : Float Integer
//  Description     : Checking Bouns Based on Years
//  Date            : 21/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears )
{
    float iBonus=0.0f;
    if(iYears>10)
    {
        iBonus=(fSalary/100)*15;
        printf("%f",iBonus);
    }
    else if((iYears>5) && (iYears<=10))
    {
        iBonus=(fSalary/100)*10;
        printf("%f",iBonus);
    }
    else if(iYears<=5)
    {
        iBonus=(fSalary/100)*5;
        printf("%f",iBonus);
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    float fSalary=0.0f;
    int iYears=0;

    printf("Enter a Amount : \n");
    scanf("%f %d",&fSalary, &iYears);

    CalculateBonus(fSalary,iYears);

    return EXIT_SUCCESS;
}