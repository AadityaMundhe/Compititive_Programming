/*
    Write a program which accept number from user and 
    if number is less than 50 then print small
    if it is greater than 50 and less than 100 print medium
    if it is greater thaan 100 then print large
    
    input : 75
    output : medium
*/

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <50)
    {
        printf("%d is small",iNo);
    }
    else if(iNo >= 50 && iNo < 100 )
    {
        printf("%d is medium ",iNo);
    }
    else
    {
        printf("%d is large ",iNo);
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
