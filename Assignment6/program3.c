#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CalculateDiscount
//  Input           : float
//  Description     : Calculating Discount 
//  Date            : 21/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    if(fAmount<1000)
    {
        printf("%f",fAmount);
    }
    else if(fAmount<5000)
    {
        printf("%f",fAmount=fAmount-(fAmount/100)*10);
    }
    else
    {
        printf("%f",fAmount=fAmount-(fAmount/100)*20);
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    float fAmount=0.0f;

    printf("Enter a Amount : \n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}