#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkChar
//  Input           : Character , Character
//  Description     : accept string and one character and check characters count
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int ChkChar(char *str, char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(ch == *str)
        {
                iCount ++;
        }
        *str++;
    }
    return iCount;  
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

    int  iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character\n");
    scanf(" %c",&cValue);

    iRet = ChkChar(arr,cValue);

    printf("Character Frequency is : %d", iRet);

    return 0;
}