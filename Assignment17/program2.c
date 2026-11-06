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

    for(iCnt = 1; iCnt <= iRows; iCnt++)
    {
        for(iCnt1 = 1; iCnt1 <= iCol*2; iCnt1++)
        { 
            if(iCnt % 2 == 0 && iCnt1%2 == 0) 
            {
                printf("%d\t",iCnt1);
            }
          
            else if(iCnt % 2 != 0 && iCnt1%2 != 0) 
            {
                printf("%d\t",iCnt1 );
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
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter an number of rows: \n");
    scanf("%d",&iValue1);

    printf("Enter an number o columns: \n");
    scanf("%d",&iValue2);

    pattern(iValue1, iValue2);
}

