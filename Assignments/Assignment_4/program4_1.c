#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumber
//  Description : checks whether the Number is positive or negative or zero.
//  Input : int
//  Output : void 
//  Author : Vedika Sudhakar Padwal
//  Date : 22/10/2026
//
///////////////////////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo < 0)
    {
        printf("Number is Negative\n");
    }
    else if(iNo > 0)
    {
        printf("Number is Positive\n");
    }
    else
    {
        printf("Number is Zero\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}