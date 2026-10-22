#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckTriangle
//  Input           : Integer, Integer, Integer
//  Description     : Checking Triangles 2 side sum is grater than other side
//  Date            : 21/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1>0 && iSide2>0 && iSide3>0 )
    {
        if( (iSide1<(iSide2+iSide3) )  && (iSide2<(iSide1+iSide3)) && (iSide3<(iSide2+iSide1) ) )
        {
            printf("Valid Triangle");
        }
        else
        {
            printf("INValid Triangle");

        }
    }
    else
    {
        printf("number should be grater than 0");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iSide1=0, iSide2=0, iSide3=0;
    printf("Enter a 3 sides : \n");
    scanf("%d %d %d",&iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}