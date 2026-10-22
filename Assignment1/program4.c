#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Check
//  Input           : Integer
//  Description     : Print number is  Divided by 5 or not
//  Date            : 19/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

typedef int BOOL;   //typedef integer into BOOL
#define TRUE 1
#define FALSE 0

BOOL Check (int iNo)
{
    if((iNo %5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    BOOL bRet =FALSE;

    printf("Enter a Number");
    scanf("%d",&iValue);

    bRet=Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}



// #include<stdio.h>
// #include<stdbool.h>



// bool Check (int iNo)
// {
//     if((iNo %5)==0)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int main()
// {
//     int iValue=0;
//     bool bRet =false;

//     printf("Enter a Number");
//     scanf("%d",&iValue);

//     bRet=Check(iValue);

//     if(bRet == true)
//     {
//         printf("Divisible by 5");
//     }
//     else
//     {
//         printf("Not Divisible by 5");
//     }
//     return 0;
// }