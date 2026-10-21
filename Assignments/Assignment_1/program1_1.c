#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//      Function Name : Divide
//      Description : it performs division and returns quotient
//      Input : int , int
//      Output : int
//      Author : Vedika Sudhakar Padwal
//      Date : 21/10/2026
//
///////////////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }
    else
    {
       iAns = iNo1 / iNo2 ;
       return iAns ;
    }
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is : %d",iRet);

    return EXIT_SUCCESS;

}