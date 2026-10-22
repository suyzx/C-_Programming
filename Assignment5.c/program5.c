#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckCharacterType
//  Input           : Character
//  Description     : Chaking Character type
//  Date            : 21/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void CheckCharacterType(char CValue)
{
    if((CValue >='A') && (CValue <='Z'))
    {
        printf(" %c Uppercase Alphabet",CValue);
    }

    else if((CValue >='a') && (CValue <='z'))
    {
        printf(" %c Lowercase Alphabet",CValue);
    }
    
     else if((CValue >= '0' ) && (CValue <= '9' ) )
    {
        printf("Digit");
    }

    else 
    {
        printf("Spetial Character");
    }
    
   
    
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char cValue ='\0';


    printf("Enter a number : \n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}