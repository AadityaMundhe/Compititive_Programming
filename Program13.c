/*
    Write a program which accepts number frok=m user and 
    print even factors of that number

    input : 36
    output : 2 6 12 18
*/

#include<stdio.h>

void DisplayEven(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo/2;iCnt++)
    {
        if(((iNo % iCnt) ==0) && ((iCnt % 2)==0) )
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

    DisplayEven(iValue);

    return 0;
}
