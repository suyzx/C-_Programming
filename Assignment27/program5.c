#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Reverse
//  Input           : Character 
//  Description     : accept string and display string in reverse order
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *ptr = str;

    while(*ptr != '\0')
    {
        ptr++;
    }

    ptr--;

    while(ptr >= str)
    {
        printf("%c", *ptr);
        ptr--;
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////// 

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    return 0;
}