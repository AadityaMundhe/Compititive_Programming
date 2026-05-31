/*
    write a program which accept number from user and 
    return difference between 
        summation of all its factors and non factors
    
    input : 12
    output : -34    (16-50)
*/

#include <stdio.h>

int FactorNonfactorDifference(int iNo)
{
    int iCnt = 0;
    int iSum1 = 1;
    int iSum2 = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else if((iNo % iCnt) != 0)
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    return iSum1-iSum2;
}

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorNonfactorDifference(iValue);

    printf("Difference between Factors and Non Factors is : %d\n",iRet);

    return 0;
}
