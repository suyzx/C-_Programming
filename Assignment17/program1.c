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

void pattern(int iRow, int iCol)
{
    int iCnt = 0, iCnt1 = 0, iNo=1;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(iCnt1 = 1; iCnt1 <= iCol; iCnt1 ++,iNo++)
        {
            if(iNo > 9)
            {
                iNo = 1;
                printf("%d\t",iNo);
            }
            else
            {
                printf("%d\t",iNo);
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
    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);
    printf("Enter number of Columns : \n");
    scanf("%d",&iValue2);

    pattern(iValue1, iValue2);

    return 0;
}


