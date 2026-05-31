/*
    write a program which accept number from user and display its table 

    input : -2
    output : 2 4 6 8 10 12 14 16 18 20
*/

#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    // Updator 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iFact = iCnt * iNo;
        printf("%d\t",iFact);
    }
    

}

int main()
{   
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}
