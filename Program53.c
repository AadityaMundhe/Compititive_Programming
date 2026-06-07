/*
    write a program which accept number from user and 
    count frequency of 2 in it 

    input : 2395
    output : 1

    input : 9000
    output : 0
*/

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}