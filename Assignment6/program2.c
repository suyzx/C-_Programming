#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckAddmission
//  Input           : float, integer
//  Description     : Checking Addmission criteria
//  Date            : 21/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void CheckAddmission(float FMarks, int iage)
{
    if( ((FMarks>=0) && (FMarks<=100)) && (iage>=0))
    { 

        if ((FMarks>=60) && (iage>=17))
        {
            printf(" Eligible For Admission\n");
        }
        else
        {
            printf(" NOT Eligible For Admission\n");
        }

    }
    else
    {
        if((FMarks<0))
        {
            printf(" Invalid Marks -> Marks less than 0 ");
        }
        else if(FMarks>100)
        {
            printf(" Invalid Marks -> Marks grater than 100 ");   
        }
        else
        {
            printf(" Invalid Age ");   
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
    float fMarks=0.0f;
    int iAge=0;

    printf("Enter a Mark : \n");
    scanf("%f %d",&fMarks ,&iAge);

    CheckAddmission(fMarks,iAge);

    return EXIT_SUCCESS;
}