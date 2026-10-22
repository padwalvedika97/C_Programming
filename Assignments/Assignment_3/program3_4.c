#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description : Converts lowercase to Uppercase and vice versa
//  Input : char
//  Output : void 
//  Author : Vedika Sudhakar Padwal
//  Date : 22/10/2026
//
///////////////////////////////////////////////////////////////////////////

void DisplayConvert(char Ch)
{
    if(islower(Ch))
    {
        printf("%c",toupper(Ch));
    }
    else if(isupper(Ch))
    {
        printf("%c",tolower(Ch));
    }
    else
    {
        printf("Invalid character");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}