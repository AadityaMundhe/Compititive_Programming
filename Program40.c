/*
    write a program which accept area in square feet and 
    convert it into square meter 
    (1 Square feet = 0.0929 square meter)  

    input : 5
    output : 0.464515
*/

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dConversion = 0.0;

    dConversion = iNo * 0.0929;

    return dConversion;
}

int main()
{   
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Conversion is : %f",dRet);
    
    return 0;
}
