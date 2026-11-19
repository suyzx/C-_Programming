#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : struprx
//  Input           : Character
//  Description     : Accept String And Toggle Case
//  Date            : 18/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >='a' && *str<='z')
        {
            printf("%c",*str-32);
        }
        else if(*str>='A' && *str<='Z')
        {
            printf("%c",*str+32);
        }
        else
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

    struprx(arr);

    return 0;
}