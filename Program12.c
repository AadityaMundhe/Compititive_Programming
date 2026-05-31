/*
    write a program which accepts a number from user and 
    print even factors of that number 
    
    input : 24
    output : 1 2 4 6 8 12
    
*/
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iCnt % 2 == 0 || iCnt == 1)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}
