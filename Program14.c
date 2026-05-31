/*
    Accept one character form user and convert case of the character

    input : a       output : A
    input : B       output : b
*/

#include<stdio.h>

void DisplayConvert(char cAplhabet)
{
    if(cAplhabet >'a' && cAplhabet < 'z' )
    {
        cAplhabet = cAplhabet - 32;
        printf("%c",cAplhabet);
    }
    else if(cAplhabet >'A' && cAplhabet < 'Z' )
    {
        cAplhabet = cAplhabet + 32;
        printf("%c",cAplhabet);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}


