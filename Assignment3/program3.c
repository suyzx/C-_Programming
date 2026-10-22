#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayFactor
//  Input           : Integer 
//  Description     : print even factors of  number 
//  Date            : 20/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(i=1; i<iNo; i++)
    {
        if((((iNo %i)==0) && ((i%2)==0)))
        {
            printf("%d\n",i);
        }
      
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
    printf("enter a number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}