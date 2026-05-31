/*
    write a program which accpet width & Height of rectangle 
    from user and calculate its area. (Area = Width * Height)

    input : 5.3  9.78
    output : 51.834
*/

#include<stdio.h>

double RectangleArea(float fNo1, float fNo2)
{
    double Area = 0.0;

    Area = fNo1 * fNo2;

    return Area;
}

int main()
{   
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectangleArea(fValue1,fValue2);

    printf("Area of Rectangle is %f",dRet);

    return 0;
}
