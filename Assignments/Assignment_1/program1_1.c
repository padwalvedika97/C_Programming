#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Prints stars equal to the given number using while loop
//  Input : int
//  Output : void
//  Author : Vedika Sudhakar Padwal
//  Date : 20/10/2026
//
///////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;

}
