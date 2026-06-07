/*
    write a program which accept number from user and 
    check whether it contains 0 in it or not .

    input : 2395
    output : there is no zero

    input : 9001
    output : it contains zero
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 0)
        {
            return true;
        }
    }
}

int main()
{   
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero ");
    }

    return 0;
}