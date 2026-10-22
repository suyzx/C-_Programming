#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CalculateElectricityBill
//  Input           : integer
//  Description     : Calculating electricity bill
//  Date            : 21/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void CalculateElectricityBill(int iNo)
{
    if(iNo<100)
    {
        printf("Bill = %d",iNo*5);
    }
    else if(iNo <=200)
    {
        
        printf("Bill = %d",500 +((iNo-100)*7) );
    }
    else if(iNo >200)
    {
        
        printf("Bill = %d",500 +700+((iNo-200)*10) );
    }



}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int Units =0;


    printf("Enter a number : \n");
    scanf("%d",&Units);
    CalculateElectricityBill(Units);

    return EXIT_SUCCESS;
}