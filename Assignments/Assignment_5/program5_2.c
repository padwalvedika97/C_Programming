#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description : Check Leap Year or not.
//  Input : int 
//  Output : void 
//  Author : Vedika Sudhakar Padwal
//  Date : 22/10/2026
//
///////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid Year\n");
    }
    else if(iYear % 400 == 0)
    {
        printf("Leap Year\n");
    }
    else if(iYear % 4 == 0 && iYear % 100 != 0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}