#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//      Function Name : Accept
//      Description : Prints stars equal to the given number using loop
//      Input : int
//      Output : void
//      Author : Vedika Sudhakar Padwal
//      Date : 21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}
