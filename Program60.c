/*
    Accept N numbers from user and Display 
    all such elements which are multiples of 11 

    input : N: 6
            Elements : 85 66 3 55 93 88
    Output : 66 55 88
*/

#include<stdio.h>
#include<stdlib.h>
 
void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
        
    }
}

int main()
{   
    int iLength = 0;
    int *Arr = NULL;
    int iCnt = 0;;

    printf("Enter Number OF Elements : ");
    scanf("%d",&iLength);

    Arr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the Elemnts : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);    
    }

    Display(Arr,iLength);

    return 0;
}