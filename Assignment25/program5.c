#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplaySchedule
//  Input           : Character 
//  Description     : Display exam time
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{
    if((ch == 'A') || (ch == 'a') )
    {
        printf("Your Exam at 7 Am\n");
    }
    else if((ch == 'B') || (ch == 'b') )
    {
        printf("Your Exam at 8.30 Am\n");
    }
    else if((ch == 'C') || (ch == 'c') )
    {
        printf("Your Exam at 9.10 Am\n");
    }
    else if((ch == 'd') || (ch == 'D') )
    {
        printf("Your Exam at 10.30Am\n");
    }
    else
    {
        printf("Wrong Division\n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////// 

int main()
{
    char cValue;


   
    printf("Enter your Division\n");
    scanf(" %c",&cValue);

    DisplaySchedule(cValue);

   

    return 0;
}