#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : FirstChar
//  Input           : Character , Character
//  Description     : accept string and one character and return index of first occurence of that character
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    char *ptr = str;


    while(*str != '\0')
    {
        if(ch == *str)
        {
            return (str - ptr);
        }

        *str++;
    }

    return -1;

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

    iRet = FirstChar(arr,cValue);

    printf("Character Location is : %d", iRet);

    return 0;
}
