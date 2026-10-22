#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindGreater
//  Description : Finds Greater number from two Numbers.
//  Input : int , int
//  Output : void 
//  Author : Vedika Sudhakar Padwal
//  Date : 22/10/2026
//
///////////////////////////////////////////////////////////////////////////

void FindGreater(int iNo1 ,int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("Greater Number is : %d\n",iNo1);
    }
    else if(iNo2 >iNo1)
    {
        printf("Greater number is: %d\n",iNo2);
    }
    else
    {
        printf("Numbers are equal");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers :\n");
    scanf("%d %d",&iValue1 ,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}