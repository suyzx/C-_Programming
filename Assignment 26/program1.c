#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayASCII
//  Input           : Character 
//  Description     : Display ASCII Table
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    printf("Char\toct\tint\thex\n");
    for(int iCnt = 0; iCnt<=255; iCnt ++)
    {
        printf("%c\t%o\t%d\t%x\n",iCnt,iCnt,iCnt,iCnt);
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////// 

int main()
{
    DisplayASCII();

    return 0;
}