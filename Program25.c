/*
    write a program which accept N and 
    print first 5 multiples of N

    input : 4
    output : 4 8 12 16 20 
*/

#include<stdio.h>

void DisplayMultiple(int iNo)
{
    int iCnt = 0;
    int iMul = 0;
    
    for(iCnt = 1; iCnt<= 5; iCnt++)
    {
        iMul = iCnt * iNo;
        printf("%d\t",iMul);
    }
}

int main()
{   
    int iValue = 0;

    printf("enter number : ");
    scanf("%d",&iValue);

    DisplayMultiple(iValue);

    return 0;
}
