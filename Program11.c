/*
    Write a program which accepts one number form user 
    and print that number of even numbers
*/

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    int iCnt = 0;
    int iEven = 2;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iEven);
        iEven = iEven + 2;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
