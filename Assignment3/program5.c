#include<stdio.h>
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkVowel
//  Input           : Integer 
//  Description     : check character is vowel(a,e,i,o,u) or not
//  Date            : 20/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

typedef int BOOL;

BOOL ChkVowel(char CValue)
{
    if(CValue== 'a'  || CValue == 'e' ||
       CValue == 'i' || CValue == 'o' ||
       CValue == 'u' || CValue == 'A' ||
       CValue == 'E' || CValue == 'I' ||
       CValue == 'O' || CValue == 'U')
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
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter a character : \n");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("It is a vowel");
    }
    else
    {
        printf("it is not a vowel");
    }

    return 0;
}
