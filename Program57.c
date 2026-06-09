/*
    Accept N numbers from user and display all such elements 
    which are divisible by 5
    
    input : N : 6
            Elements : 85 3 80 93 88
    Output : 85 80
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
            printf("%d ",Arr[iCnt]);
        }
    }

}

int main()
{   
    int *Arr = NULL;
    int iLength = 0;
    int iCnt = 0;

    printf("Enter Number of elements : ");
    scanf("%d",&iLength);

    Arr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr, iLength);

    return 0;
}
