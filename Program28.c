/*
    write a program to find factorial of given number

    input : -5
    output : 120        (5*4*3*2*1)
*/

#include<stdio.h>

int DisplayFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iCnt * iFact;
    }
    return iFact;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("enter number : ");
    scanf("%d",&iValue);

    iRet = DisplayFactorial(iValue);

    printf("Factorial of NUmber is : %d",iRet);

    return 0;
}
