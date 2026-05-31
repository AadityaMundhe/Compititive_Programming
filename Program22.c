/*
    write a program which accept number from user and 
    print numbers till that number 

    input : 8
    output : 1 2 3 4 5 6 7 8
*/

#include<stdio.h>

void DisplaySerial(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplaySerial(iValue);

    return 0;
}
