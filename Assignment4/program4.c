#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckVoteEligibility
//  Input           : Integer 
//  Description     : check age 
//  Date            : 20/10/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

void CheckVoteEligibility( int iNo)
{
    if(iNo>=18)
    {
        printf("Eligible for Voting \n");
    }
    else if (iNo<=0)
    {
        printf("invalid age ");
    }
    else
    {
        printf("Not Eligible for Voting \n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iAge =0;


    printf("Enter a number : \n");
    scanf("%d",&iAge);

    CheckVoteEligibility(iAge);

    return EXIT_SUCCESS;
}