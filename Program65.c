/*
    Accept N numbers from user and 
    accept another one number as NO,
    return Frequency of NO from it 

    input : N : 5
            NO : 55
            Elements : 85 34 55 88 55
    output : 2
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iSize;  iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{   
    int iLength = 0;
    int iNo = 0;
    int *Arr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter NUmber of Elments : ");
    scanf("%d",&iLength);
    
    printf("Enter the NUmber to Search : ");
    scanf("%d",&iNo);

    Arr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter The Elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = Frequency(Arr,iLength,iNo);

    printf("Frequency is : %d",iRet);

    return 0;
}