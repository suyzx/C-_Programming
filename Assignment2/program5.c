#include<stdio.h>
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkEven
//  Input           : Integer 
//  Description     : accept number from user and cjeck weather number is even or odd 
//  Date            : 19/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo%2)==0)
    {
        return TRUE;
    }
    else
    {
         return FALSE;
    }
}


///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{

    int iValue=0;
    BOOL bRet=FALSE;
    
    printf("enter a number : ");
    scanf("%d",&iValue);

    
    
    bRet=ChkEven(iValue);
    if(bRet==TRUE)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }


    return 0;
}