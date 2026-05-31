/*
    write a program which acceots distance in kilometer and 
    convert it into meter (1 kilometer = 1000 Meter )

    input : 5
    output : 5000
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iConvert = 0;

    iConvert = 1000 * iNo;

    return iConvert;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Conversion of Km to Meter is %d",iRet);

    return 0;
}
