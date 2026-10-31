#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : Integer
//  Description     : Accept single digit Number And print it into word
//  Date            : 30/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Display ( int iNo)
{
    switch ( iNo)
    {
        case 1: printf("one");
        break;
        case 2: printf("two");
        break;
        case 3: printf("Three");
        break;
        case 4: printf("Four");
        break;
        case 5: printf("Five");
        break;
        case 6: printf("Six");
        break;
        case 7: printf("Seven");
        break;
        case 8: printf("Eight");
        break;
        case 9: printf("nine");
        break;
        case 0: printf("Zero");
        break;
        default : printf("Invalid Number");
    }
    
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}