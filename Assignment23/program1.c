#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : strlwrx
//  Input           : Character
//  Description     : Accept String and Convert it Capitalcase into Lower case
//  Date            : 18/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str>='A' && *str<='Z')
        {
            printf("%c",*str+32);
        }
        else
        {
            printf("%c",*str);
        }
        *str++;
    }   

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    
    char arr[20];

    printf("Enter a string\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    return 0;
}