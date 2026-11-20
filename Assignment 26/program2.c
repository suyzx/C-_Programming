#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : Character 
//  Description     : if character is small display cpital and vice versa. If other cases display as it is 
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        printf("%c",ch+32);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c",ch-32);
    }
    else
    {
        printf("%c",ch);
    }
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