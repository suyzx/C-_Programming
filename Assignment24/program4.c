#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : LastChar
//  Input           : Character , Character
//  Description     : accept string and one character and return index of last occurence of that character
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    char *ptr = str;
    int iPos = -1;

    while(*str != '\0')
    {
        if(ch == *str)
        {
            iPos = str - ptr;
        }

        *str++;
    }

    return iPos;

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

    iRet = LastChar(arr,cValue);

    printf("Character Location is : %d", iRet);

    return 0;
}
