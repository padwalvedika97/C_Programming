#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckVotingEligibility
//  Description : Check whether the person is eligible to vote or not.
//  Input : int 
//  Output : void 
//  Author : Vedika Sudhakar Padwal
//  Date : 22/10/2026
//
///////////////////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iNo)
{
    if(iNo >= 18 )
    {
        printf("You are Eligible to vote\n");
    }
    else if(iNo < 18 && iNo > 0)
    {
        printf("Not eligible for Voting");
    }
    else
    {
        printf("Invalid age");
    }
}

int main()
{
    int iAge = 0;
    
    printf("Enter your Age :\n");
    scanf("%d ",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}