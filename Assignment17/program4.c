#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : pattern
//  Input           : Integer , Integer
//  Description     : Pattern Printing
//  Date            : 04/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void pattern(int iRows, int iCol)
{
    int iCnt = 0, iCnt1 = 0;

    for(iCnt = 1; iCnt <= iRows; iCnt ++)
    {
        int i=-1;

        for(iCnt1 = 1; iCnt1 <= iCol; iCnt1++)
        {
            if(iCnt % 2 != 0)
            {
                printf("%d\t",iCnt1);
            }
            else
            {
               
                printf("%d\t",i);
                i--;
            }
            
            
        }
        printf("\n");
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iValue2 = 0;
    printf("Enter rows: ");
    scanf("%d",&iValue);

    printf("Enter rows: ");
    scanf("%d",&iValue2);

    pattern(iValue , iValue2);


    return 0;
}

