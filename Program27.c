/*
    Accept single digit number from user and print it into word 

    input : 9
    output : Nine

    input : -3
    output : three
*/

#include<stdio.h>

void DisplayWord(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 1)
    {
        printf("One");
    }
    else if(iNo == 2)
    {
        printf("Two");
    }
    else if(iNo == 3)
    {
        printf("Three");
    }
    else if(iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if(iNo == 6)
    {
        printf("Six");
    }
    else if(iNo == 7)
    {
        printf("Seven");
    }
    else if(iNo == 8)
    {
        printf("Eight");
    }
    else if(iNo == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid Value");
    }
    
}

int main()
{   
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayWord(iValue);

    return 0;
}
