//Accept one number from user and print that number of * on screen
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : Integer
//  Description     : Take input from user and print *
//  Date            : 19/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{

while(iNo>0)
{
    printf("*\n");
    iNo--;
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

    Display(iValue);

    return 0;
}