#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayGrade
//  Input           : FLoat
//  Description     : Displaying Grade
//  Date            : 21/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void DisplayGrade(float iNo)
{
    if((iNo>=1) && (iNo<=100))
    {

        if( (iNo>=90)&&(iNo<=100))
        {
            printf(" Grade A");
        }
        else if ((iNo>=75)&&(iNo<=89))
        {
            printf("Grade B");
        }
        else if((iNo>=60)&&(iNo<=74) )
        {
            printf("Grade C");
        }
        else if((iNo>=40)&&(iNo<=59) )
        {
            printf("Grade D");
        }
        else if(iNo<40)
        {
            printf("FAIL");
        }

    }
    else
    {
        printf("Invalid MARKS");
    }
    
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    float fMarks=0;

    printf("Enter a Marks : \n");
    scanf("%f",&fMarks);

   

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}