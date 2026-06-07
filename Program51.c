/*
    write a program which accept number from user and
    display its digits in reverse order

    input : -1018
    output : 8
             1
             0
             1
*/

#include<stdio.h>

void DisplayDigitReverse(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    DisplayDigitReverse(iValue);

    return 0;
}