/*
    Write a program to find even factorial of given number 

    input : -5 
    output : 8      (4*2)
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iEven = 1;

    // Updator 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
           iEven = iCnt * iEven;
        }
    }
    return iEven;
}

int main()
{   
    int iValue = 0;
    int iRet  = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}
