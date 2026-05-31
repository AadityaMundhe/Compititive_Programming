/*
    Accept amount in US dollar and return its corresponding
    value in Indian Currency 
    consider 1$ as 70 rupees

    input : 10 
    output : 700
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    if(iNo > 0)
    {
        iNo = iNo * 70;
    }

    return iNo;
}
int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}
