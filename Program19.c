/*
    write a program which accept number from user and 
    return summation of all its non factors 

    input : 12
    output : 50 
*/

#include<stdio.h>

int SummationNonFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt< iNo; iCnt++)
    {
        if((iNo % iCnt)!= 0)
        {
            iSum = iSum + iCnt;

        }
    }
    return iSum;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("enter the number : ");
    scanf("%d",&iValue);
    
    iRet = SummationNonFactors(iValue);

    printf("Summation of non factors is %d ",iRet);

    return 0;
}
