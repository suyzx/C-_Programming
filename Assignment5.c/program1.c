#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : FindGratest
//  Input           : Integer, Integer, Integer
//  Description     : out of 3 numbers which number is grater
//  Date            : 21/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void FindGratest(int iNo1, int iNo2, int iNo3)
{
    if( (iNo1>iNo2) && (iNo1>iNo3))
    {
        printf("%d is Gratest ",iNo1);
    }
    else if( (iNo2>iNo1) && (iNo2>iNo3) )
    {
        printf("%d is Gratest ",iNo2);
    }
    else
    {
        printf("%d is Gratest ",iNo3);
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 =0, iValue2 =0, iValue3 =0;


    printf("Enter a number : \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    FindGratest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}