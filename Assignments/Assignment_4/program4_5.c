#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDivisibility
//  Description : Check whether the Number is divisible by 5 or not.
//  Input : int 
//  Output : void 
//  Author : Vedika Sudhakar Padwal
//  Date : 22/10/2026
//
///////////////////////////////////////////////////////////////////////////

void CheckDivisibility(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("Number is Divisible by 5\n");
    }
    else
    {
        printf("Number is not Divisible by 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}