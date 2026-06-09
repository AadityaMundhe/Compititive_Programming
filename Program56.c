/*
    Accept N numbers from user and 
    return difference between summation 
    of even elements and summation of odd elements
    
    input : N : 6
            Elements : 85 3 80 93 88
    output : 53     (234 - 181)   
*/

#include<stdio.h>
#include<stdlib.h>

int DifferencEvenOdd(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    return iSumEven - iSumOdd;

}

int main()
{   
    int iLength = 0;
    int iCnt = 0;
    int *Arr = NULL;
    int iRet = 0;

    printf("Enter NUmber of Elements :");
    scanf("%d",&iLength);

    Arr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements :  \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = DifferencEvenOdd(Arr,iLength);

    printf("Difference of Even and Odd is : %d",iRet);

    free(Arr);

    return 0;
}