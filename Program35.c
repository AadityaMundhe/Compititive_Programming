/*
    Write a program to which returns difference between
    even factorial and odd factorial of a given number

    input : -5 
    output : -7      (8-15)
*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iOdd = 1;
    int iEven = 1;

    // Updator 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
           iOdd = iCnt * iOdd;
        }
        else if(iCnt % 2 == 0)
        {
           iEven = iCnt * iEven;
        }
    }
    return iEven-iOdd;
}

int main()
{   
    int iValue = 0;
    int iRet  = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}
