#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : PrintEven
//  Input           : Integer 
//  Description     : print even numbers on screen
//  Date            : 20/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{

    if(iNo==0)
    {
        printf("0 output");
        return ;
    }

    int i=0;
    if(iNo>0)
    {
        for(i=1;i<=(iNo*2);i++)
        {
            if((i%2)==0)
            {
                printf("%d\n",i);
            }
        }
    }

    else 
    {
        for(i=-1;i>=(iNo*2);i--)
        {
            if((i%2)==0)
            {
                printf("%d\n",i);
            }
        }
    }

    
}


///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;
    printf("Enter a number ");
    scanf("%d",&iValue);

    PrintEven(iValue);



    return 0;
}