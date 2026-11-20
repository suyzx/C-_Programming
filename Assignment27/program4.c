#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkVowel
//  Input           : Character 
//  Description     : Check Vowels
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u') 
        {
        
            return TRUE;
        }
        *str++;
    }
    return FALSE;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////// 

int main()
{
    char arr[20];

    BOOL bRet = FALSE;

   
    printf("Enter Character\n");
    scanf(" %c",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowels\n");
    }
    else
    {
        printf("No Vowels \n");
    }

    return 0;
}