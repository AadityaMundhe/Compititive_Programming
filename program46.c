/*
    write a program which accept range from user and 
    display all numbers in between that range .

    input : -10 2
    output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 
*/

#include<stdio.h>

void  RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{   
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}