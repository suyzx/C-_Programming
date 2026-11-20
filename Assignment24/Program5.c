
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Reverse
//  Input           : Character 
//  Description     : accept string and Reverse it
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char  temp;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
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
    scanf("%[^\n]s", Arr);

    Reverse(Arr);

    printf("Reversed string is: %s\n", Arr);

    return 0;
}