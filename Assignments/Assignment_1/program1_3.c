#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Prints number from 5 to 1 using while loop
//  Input : void
//  Output : void
//  Author : Vedika Sudhakar Padwal
//  Date : 21/10/2026
//
///////////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;

    while(i > 0)
    {
        printf("%d\t",i);
        i--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}
 