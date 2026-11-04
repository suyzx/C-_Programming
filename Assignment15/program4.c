#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Multiply
//  Input           : Integer, Integer, Integer
//  Description     : Multiplication of 3 number 
//  Date            : 02/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////


int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 1;
    if(iNo1 != 0)
    {
        iMul = iMul * iNo1;
    }  

    if(iNo2 != 0)
    {
        iMul = iMul * iNo2;
    }    

    if(iNo3 != 0)
    {
        iMul = iMul * iNo3;
    }    

    if(iNo1 ==0 && iNo2==0 && iNo3 ==0)
    {
        return 0;
    }

    return iMul;

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("enter 3 numbers : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    
    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d",iRet);

    return  0;
}