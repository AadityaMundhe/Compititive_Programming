/*
    write a program which accept range from user and 
    return addition of all numbers in between that range 
    (Range should contains positive numbers only)

    input : 23 30
    output : 212
    
    input : -10 2
    output : Invalid range 

    input : 90 18
    output : invalid range 
*/
#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    
    if((iStart < iEnd) || (iStart < 0) || (iEnd < 0))
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{   int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("Addition of Numbers between Range is : %d",iRet);
    }

    return 0;
}