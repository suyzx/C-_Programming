
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Divide
//  Input           : Integer, Integer
//  Description     : Print Division
//  Date            : 19/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2) 
{
    int iAns=0;
    if(iNo2>iNo1 )
    {
        return -1;
    }

    iAns=iNo1/iNo2;
    return iAns;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{

int iValue1 =15, ivalue2=5;
int iRet=0;

iRet=Divide(iValue1 , ivalue2);

printf("Dividion is %d\n", iRet);

return 0;
}