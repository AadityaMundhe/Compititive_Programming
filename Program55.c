/*
    write a program which accept number from user and 
    count frequency of such a digits which are less than 6

    input : 2395
    output : 3

    input : 9976
    output : 0
*/

#include<stdio.h>

int CountLessThanSix(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iFrequency++;
        }

        iNo = iNo / 10;
    }

    return iFrequency;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountLessThanSix(iValue);

    printf("%d",iRet);

    return 0;
}