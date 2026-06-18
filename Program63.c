/*
    Accept N numbers from user and 
    check whether that numbers contain 11 in it or not
    
    input : N: 6
            Elements : 85 66 11 80 93 88
    output : 11 Is Present 

    input : N: 6
            Elements : 85 66 22 80 93 88
    output : 11 Is not Present 
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{   
    int iLength = 0;
    int *Arr = NULL;
    int iCnt = 0;
    BOOL bRet = FALSE;

    printf("Enter number of Elements : ");
    scanf("%d",&iLength);

    Arr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    bRet = Check(Arr,iLength);

    if(bRet == TRUE)
    {
        printf("11 is present ");
    }
    else
    {
        printf("11 is not Present ");
    }

    free(Arr);

    return 0;
}