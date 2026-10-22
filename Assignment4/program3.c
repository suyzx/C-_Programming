#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : FindGreater
//  Input           : Integer , Integer
//  Description     : check grater number between 2 numbers
//  Date            : 20/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void FindGreater(int iNo1, int iNo2)
{
    if( iNo1>iNo2)
    {
        printf("%d is grater",iNo1);
    }
    else if(iNo1==iNo2)
    {
        printf("%d, & %d is EQUAL",iNo1,iNo2);

    }
    else 
    {
        printf("%d is grater",iNo2);

    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 =0;
    int iValue2 =0;


    printf("Enter a number : \n");
    scanf("%d",&iValue1);

    printf("Enter a number : \n");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}