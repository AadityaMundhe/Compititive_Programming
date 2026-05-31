/*
    write a program which accept temperature in Fahrenheit and
    conert it into celsius (icelsius = (Fahrenheit -32)*(5/9))

    input : 10
    output : -12.2222   (10-32)*(5/9)
*/

#include<stdio.h>

double FahrenheitToCelsius(float fNo)
{
    double dTemp = 0.0;
    
    dTemp = (fNo-32)*5/9;

    return dTemp;
}

int main()
{   
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FahrenheitToCelsius(fValue);

    printf("Conversion is : %f",dRet);

    return 0;
}
