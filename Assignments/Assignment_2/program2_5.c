#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEven
//  Description : Check whether the given number is even or odd.
//  Input : int 
//  Output : BOOL
//  Author : Vedika Sudhakar Padwal
//  Date : 22/10/2026
//
///////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL iRet = FALSE;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CheckEven(iValue);

    if(iRet == TRUE)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");

    }

    return EXIT_SUCCESS;
}
