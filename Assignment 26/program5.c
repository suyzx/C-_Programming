#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : Character 
//  Description     : Accept character and Display ASCII Value  in Decimal, Octal and Hexadecimal Format
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal %d\n",ch);
    printf("Octal %o\n",ch);
    printf("HexaDecimal %X\n",ch);


}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////// 

int main()
{
    char cValue = '\0';
   
    printf("Enter Character\n");
    scanf("%c",&cValue);

    Display(cValue);

    
    return 0;
}