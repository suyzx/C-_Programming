#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayConvert
//  Input           : Integer 
//  Description     : convert case of that character
//  Date            : 20/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{

    if( ((CValue>=97) &&(CValue<=122)) || (CValue>=65) &&(CValue<=90) )
    {

        if((CValue>=97) &&(CValue<=122))
        {
            printf("%c",CValue-32);
        }
        else if((CValue>=65) &&(CValue<=90))
        {
            printf("%c",CValue+32);
        }
    }
    
    else
    {
        printf(" Wrong Input");
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{

    char cValue ='\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}