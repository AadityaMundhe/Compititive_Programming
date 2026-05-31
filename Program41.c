/*
    write a program which accept number from user and return 
    the count of even digits 

    input : -1018
    output : 2
*/

#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    
    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 ==0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    return iCount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Count of Even Digits is : %d",iRet);
}