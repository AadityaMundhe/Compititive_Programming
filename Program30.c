/*
    write a program which accept number from user and display its table in reverse

    input : -2
    output : 20 18 16 14 12 10 8 6 4 2 
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
    
    for(iCnt = 10; iCnt > 0; iCnt--)
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
