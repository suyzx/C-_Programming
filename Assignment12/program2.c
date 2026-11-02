# include<stdio.h>
# define TRUE 1
# define FALSE 0

///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkZero
//  Input           : Integer
//  Description     : check weather number contains 0 or not
//  Date            : 01/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

typedef int Bool;

Bool ChkZero(int iNo)
{
    int iDigit = 0;
     
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;

           
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////

 int main()
{

    int iValue1 = 0;
    Bool bRet = FALSE;

    printf("Enter Number ");
    scanf("%d",&iValue1);

    bRet = ChkZero(iValue1);
    if(bRet == TRUE)
    {
        printf("it contains zero");
    }
    else
    {
        printf("There is not zero");
    }

    return 0;
}