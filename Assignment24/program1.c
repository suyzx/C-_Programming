
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkChar
//  Input           : Character , Character
//  Description     : accept string and one character and check character is present or not
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(ch == *str)
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
    char cValue;

    BOOL bRet = FALSE;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found\n");
    }
    else
    {
        printf("Charactr not found\n");
    }

    return 0;
}