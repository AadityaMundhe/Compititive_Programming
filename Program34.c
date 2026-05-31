/*
    Write a program to find odd factorial of given number 

    input : -5 
    output : 15      (5*3*1)
*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iOdd = 1;

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
    }
    return iOdd;
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
