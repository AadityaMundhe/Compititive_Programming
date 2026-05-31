/*
    write a program which accept radius of circle from user and 
    calculate its area .
    consider value of PI as 3.14 (Area = PI *Radius*Radius)

    input : 5.3
    output : 88.2026
*/

#include<stdio.h>

double CircleArea(float fNo)
{
    double Area = 0.0;

    float PI = 3.14f;

    
    Area = PI * fNo * fNo;
    
    return Area;
}

int main()
{   
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %f",dRet);

    return 0;
}
