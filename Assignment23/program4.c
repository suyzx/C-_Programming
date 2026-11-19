#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayDigital
//  Input           : Character
//  Description     : display only digit from that String
//  Date            : 18/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void DisplayDigital(char *str)
{
    while(*str != '\0')
    {
        if(*str >='0' && *str<='9')
        {
            printf("%c",*str);
        }
        
        str++;
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

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    DisplayDigital(arr);

    return 0;
}