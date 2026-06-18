/*
    Accpet N numbers from user and 
    return frequency of 11 from it 

    input : N : 6
            Elements : 85 66 7 15 94 58
    output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{   
    int iLength = 0;
    int *Arr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter Number of Elements : ");
    scanf("%d",&iLength);

    Arr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter The Elements \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    iRet = Frequency(Arr, iLength);

    printf("Frequency of 11 is : %d",iRet); 
    
    return 0;
}