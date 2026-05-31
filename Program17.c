/*
    write a program which accepts number from user and 
    display its factors in decreasing order

    input : 12
    output : 6 4 3 2 1 
*/

#include<stdio.h>

void FactorsReversal(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >=0; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    FactorsReversal(iValue);

    return 0;
}
