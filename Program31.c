/*
    write a program which accept number from user 
    and display below pattern 

    input : -5
    output : * * * * * # # # # #
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    // Updator 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t",iCnt);
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t",iCnt);
    }
}
int main()
{   
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}
