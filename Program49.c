/*
    write a program which accept range from user and
    return addition of all even numbers in between that range.
    (Range Should contain positive numbers only)

    input : 23 30
    output : 108

    input : -10 18
    output : Invalid Range 

    input : 90  18
    output : Invalid Range
*/

#include<stdio.h>

int RangeEvenSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
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

    iRet = RangeEvenSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Input ");
    }
    else
    {
        printf("Addition of Even Numbers in range is : %d",iRet);
    }

    return 0;
}