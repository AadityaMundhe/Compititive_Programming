/*
    write a program which accept range from user and
    display all numbers in between that range in reverse order 

    input : 9 12
    output : 9 10 11 12

    input: -10 2
    output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 

    input : 90 8
    output : invalid range
*/

#include<stdio.h>

int RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        return -1;
    }

    for(iCnt = iEnd; iCnt > iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{   
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    iRet = RangeDisplayRev(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid Input ");
    }
    else
    {
        printf("%d",iRet);
    }

    return 0;
}