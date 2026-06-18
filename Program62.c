/*
    Accept N Numbers from user and 
    return difference between frequency of 
    even numbers and odd numbers

    input : N : 7
            Elements : 85 66 3 80 93 88 90
    output : 1 (4-3)
*/

#include<stdio.h>
#include<stdlib.h>

int FrequencyDiff(int Arr[], int iSize)
{
    int iCnt = 0;
    int CountEven = 0;
    int CountOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            CountEven++;
        }
        else
        {
            CountOdd++;
        }
    }

    return CountEven-CountOdd;
}

int main()
{   
    int iLength = 0;
    int *Arr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter Number of elements : ");
    scanf("%d",&iLength);

    Arr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = FrequencyDiff(Arr,iLength);

    printf("Differnce is : %d",iRet);

    return 0;
}