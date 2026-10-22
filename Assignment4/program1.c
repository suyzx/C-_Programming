#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckNumber
//  Input           : Integer 
//  Description     : determines weather the number is positive , negative or zero
//  Date            : 20/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo>0)
    {
        printf("%d Number is positive \n",iNo);
    }
    else if(iNo<0)
    {
        printf("%d Number is negative \n",iNo);
    }
    else
    {
        printf("%d number is zero\n",iNo);
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}