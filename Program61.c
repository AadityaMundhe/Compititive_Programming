/*
    Accept N numbers from user and 
    return frequency of even numbers

    input : N : 6
            Elements : 85 66 3 93 88

    output : 3
*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int EvenCounter = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            EvenCounter++;
        }
    }

    return EvenCounter;
}

int main()
{   
    int iLength = 0;
    int iCnt = 0;
    int *Arr = NULL;
    int iRet = 0;

    printf("Enter Number of Elements : ");
    scanf("%d",&iLength);

    Arr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = CountEven(Arr,iLength);

    printf("Count is : %d",iRet);

    free(Arr);
    
    return 0;
}