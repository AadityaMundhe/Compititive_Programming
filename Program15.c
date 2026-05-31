/*
    Accept one character from user and check whether that character is 
    vowel(a,e,i,o,u) or not .

    input : E       output : TRUE
    input : d       output : FALSE

*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char cAlphabet)
{
    if(cAlphabet == 'a' || cAlphabet == 'e' || cAlphabet == 'i' || cAlphabet == 'o' || cAlphabet == 'u' ||cAlphabet == 'A' || cAlphabet == 'E' || cAlphabet == 'I' || cAlphabet == 'O' || cAlphabet == 'U' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character : ");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);
    
    if(bRet== TRUE)
    {
        printf("%c is Vowel",cValue);
    }
    else
    {
        printf("%c is not Vowel ",cValue);
    }
    return 0;
}
