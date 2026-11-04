#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Percentage
//  Input           : Integer, Integer
//  Description     : calculate percentage
//  Date            : 02/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

float Percentage(int iNo1 , int iNo2)
{


    float fPer = 0.0f;
    fPer = ((float)iNo2 /(float)iNo1)*100;
    return fPer;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("enter total marks : \n");
    scanf("%d",&iValue1);

    printf("Enter obtain Marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is : %.2f",fRet);

    return 0;
}