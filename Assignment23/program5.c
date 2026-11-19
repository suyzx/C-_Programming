#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : WhiteSpaces
//  Input           : Character
//  Description     : Count Number of White Spaces
//  Date            : 18/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void WhiteSpaces(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str ==' ')
        {
           iCount++;
        }
        

        str++;
    }
    printf("%d",iCount);

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

    WhiteSpaces(arr);

    return 0;
}